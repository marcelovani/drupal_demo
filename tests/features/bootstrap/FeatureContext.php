<?php

/**
 * @file
 * Contains \FeatureContext.
 */

use Behat\Behat\Context\SnippetAcceptingContext;
use Behat\Gherkin\Node\TableNode;
use Drupal\DrupalExtension\Context\DrupalContext;
use Behat\Testwork\Hook\Scope\BeforeSuiteScope;
use Behat\Testwork\Hook\Scope\AfterSuiteScope;
use Drupal\paragraphs\Entity\Paragraph;

/**
 * Defines generic step definitions.
 */
class FeatureContext extends DrupalContext implements SnippetAcceptingContext
{

  Protected $paragraphs;

  /**
   * @BeforeSuite
   *
   * Enables test content.
   */
  public static function setup(BeforeSuiteScope $scope)
  {

  }

  /**
   * @AfterSuite
   *
   * Disables test content.
   */
  public static function teardown(AfterSuiteScope $scope)
  {

  }

  /**
   * Wait for the document to be loaded.
   *
   * @see http://www.whatwg.org/specs/web-apps/current-work/multipage/dom.html#current-document-readiness
   *
   * Requires @javascript tag on the scenario.
   */
  public function jsWaitForDocumentLoaded($timeout = 5000)
  {
    $this->getSession()->wait($timeout, "document.readyState == 'complete'");
  }

  /**
   * Checks that a 403 Access Denied error occurred.
   *
   * @Then I should get an access denied error
   */
  public function assertAccessDenied()
  {
    $this->assertSession()->statusCodeEquals(403);
  }

  /**
   * Checks if a given css selector is present on the page.
   *
   * @Then /^I should see the "([^"]*)" element$/
   */
  public function theElementExists($value)
  {
    $this->assertSession()->elementExists('css', "$value");
  }

  /**
   * Wait until the id="updateprogress" element is gone,
   * or timeout after 30 seconds.
   *
   * @Given I wait for the batch job to finish
   *
   * Requires @javascript tag on the scenario.
   */
  public function iWaitForTheBatchJobToFinish() {
    $this->getSession()->wait(180000, 'jQuery("#updateprogress").length === 0');
  }

  /**
   * @Given I am on the profile page for user :arg1
   */
  public function onProfilePage($arg1)
  {
    $account = user_load_by_name($arg1);

    if (!empty($account)) {
      $this->visitPath($account->toUrl()->getInternalPath());
      return;
    }
    throw new \Exception(sprintf('The user "%s" does not exist', $arg1));
  }

  /**
   * Checks that the img src can be accessed. i.e.  ".block-site-logo img"
   *
   * @Then the :selector image should load
   */
  public function theImageShouldLoad($selector)
  {
    $page = $this->getSession()->getPage();
    $current_url = $this->getSession()->getCurrentUrl();

    $element = $page->find('css', $selector);
    if (empty($element)) {
      throw new \Exception(sprintf('The element "%s" was not found.', $selector));
    }

    $src = $element->getAttribute('src');
    if (substr($src, 0, 2) == '//') {
      $src = 'http:' . $src;
    }
    $this->visitPath($src);
    $this->assertSession()->statusCodeEquals(200);

    // Return to original page.
    $this->visitPath($current_url);
  }

  /**
   * Checks that field with specified in|name|label|value is disabled.
   * Example: Then the "Email" field should be disabled
   *
   * @Then /^the "(?P<name>(?:[^"]|\\")*)" field should (?P<negate>(?:(not |)))be disabled/
   */
  public function stepFieldShouldBeDisabled($name, $negate)
  {
    $page = $this->getSession()->getPage();

    $element = $page->findField($name);
    if (empty($element)) {
      throw new \Exception(sprintf('The element "%s" was not found.', $name));
    }

    $disabledAttribute = $element->getAttribute('disabled');
    if (trim($negate)) {
      if (!empty($disabledAttribute)) {
        throw new \Exception(sprintf("Failed asserting element '%s' is not disabled", $name));
      }
    } else {
      if (empty($disabledAttribute)) {
        throw new \Exception(sprintf("Failed asserting element '%s' is disabled", $name));
      }
    }
  }

  /**
   * @Then I show the textarea named :arg1
   */
  public function iShowTheTextareaNamed($arg1)
  {
    $element = $this->getSession()->getPage()->findField($arg1);
    if (empty($element)) {
      throw new \Exception(sprintf('The element "%s" was not found.', $arg1));
    }

    $js = <<<HEREDOC
        jQuery("textarea[name='$arg1']").css('visibility', 'visible');
        jQuery("textarea[name='$arg1']").show();
HEREDOC;
    $this->getSession()->executeScript($js);
  }

  /**
   * @Then I hide the textarea named :arg1
   */
  public function iHideTheTextareaNamed($arg1)
  {
    $element = $this->getSession()->getPage()->findField($arg1);
    if (empty($element)) {
      throw new \Exception(sprintf('The element "%s" was not found.', $arg1));
    }

    $js = <<<HEREDOC
        jQuery("textarea[name='$arg1']").css('visibility', 'hidden');
        jQuery("textarea[name='$arg1']").hide();
HEREDOC;
    $this->getSession()->executeScript($js);
  }

  /**
   * @When I show the :arg1 elements
   */
  public function iShowTheElements($arg1)
  {
    $js = "jQuery('$arg1').show();";
    $this->getSession()->executeScript($js);
  }

  /**
   * @Then I fill in the textarea named :arg1 with :arg2
   */
  public function iFillInTheTextareaNamedWith($arg1, $arg2)
  {
    $element = $this->getSession()->getPage()->findField($arg1);
    if (empty($element)) {
      throw new \Exception(sprintf('The element "%s" was not found.', $arg1));
    }
    $fieldId = $element->getAttribute('id');
    if (empty($fieldId)) {
      throw new Exception('Could not find an id for field with locator: ' . $arg1);
    }
    $this->getSession()->executeScript("CKEDITOR.instances[\"$fieldId\"].setData(\"$arg2\");");
  }


  /**
   * Checks that a given image is present in the page.
   *
   * @Then I (should )see the image :filename
   */
  public function assertImagePresent($filename)
  {
    // Drupal appends an underscore and a number to the filename when duplicate
    // files are uploaded, for example when a test is run more than once.
    // We split up the filename and extension and match for both.
    $parts = pathinfo($filename);
    $extension = $parts['extension'];
    $filename = $parts['filename'];
    $this->assertSession()->elementExists('css', "img[src$='.$extension'][src*='$filename']");
  }

  /**
   * Checks that a given image is not present in the page.
   *
   * @Then I should not see the image :filename
   */
  public function assertImageNotPresent($filename)
  {
    // Drupal appends an underscore and a number to the filename when duplicate
    // files are uploaded, for example when a test is run more than once.
    // We split up the filename and extension and match for both.
    $parts = pathinfo($filename);
    $extension = $parts['extension'];
    $filename = $parts['filename'];
    $this->assertSession()->elementNotExists('css', "img[src$='.$extension'][src*='$filename']");
  }

  /**
   * Checks the order of elements on a page.
   *
   * @Then the :element1 element should be before the :element2 element
   */
  public function theElementShouldBeBeforeTheElement($element1, $element2)
  {
    $page = $this->getSession()->getPage();
    $page_html = $page->getHtml();
    $item1 = $page->find('css', $element1);
    if (empty($item1) || !$item1_html = $item1->getHtml()) {
      throw new \Exception(sprintf('The element "%s" was not found.', $element1));
    }
    $item2 = $page->find('css', $element2);
    if (empty($item2) || !$item2_html = $item2->getHtml()) {
      throw new \Exception(sprintf('The element "%s" was not found.', $element2));
    }
    $pos1 = strpos($page_html, $item1_html);
    $pos2 = strpos($page_html, $item2_html);
    if ($pos1 > $pos2) {
      throw new \Exception(sprintf('The element "%s" is not before "%s".', $element1, $element2));
    }
  }

  /**
   * Check title of a link
   *
   * @Then the :arg1 link title is :arg2
   */
  public function theLinkTitleIs($element, $text)
  {
    $this->assertSession()->elementExists('css', "$element");
    $this->assertSession()->elementTextContains('css', $element, $text);

  }

  /**
   * Check link href url
   *
   * @Then the :arg1 link url is :arg2
   */
  public function theLinkUrlIs($element, $url)
  {
    $this->assertSession()->elementAttributeContains('css', $element, 'href', $url);
  }

  /**
   * Check the google tag manager noscript present in the page
   *
   * @Given google tag manager id is :arg1
   */
  public function googleTagManagerIdIs($id)
  {
    $this->jsWaitForDocumentLoaded();

    // script in head tag
    try {
      $script = '//www.googletagmanager.com/gtm.js?id=' . $id;
      $this->assertSession()->responseContains($script);
    } catch (Exception $e) {
      throw new Exception('google tag manager script "www.googletagmanager.com/gtm.js?id=' . $id . '" not found in head tag');
    }

    // noscript
    $this->assertSession()->responseContains("www.googletagmanager.com/ns.html?id=$id");
  }

  /**
   * @Given I click the element identified as :id
   */
  public function iClickTheElementIdentifiedAs($id)
  {
    $element = $this->getSession()->getPage()->find('named', array('id', $id));
    if (empty($element)) {
      throw new Exception("No html element found for ('id' = '$id')");
    }

    $element->click();
  }

  /**
   * @Given I click the :selector element
   */
  public function iClickTheElement($selector)
  {
    $element = $this->getSession()->getPage()->find('css', $selector);
    if (empty($element)) {
      throw new Exception("No html element found for ('$selector')");
    }

    $element->click();
  }

  /**
   * @Then /^I should(| not) see "([^"]*)" in the "([^"]*)" attribute of the "([^"]*)" element/
   */
  public function iShouldSeeInTheAttributeOfTheElement($negate, $val, $attr, $selector)
  {
    $element = $this->getSession()->getPage()->find('css', $selector);
    if (empty($element)) {
      if (empty(trim($negate))) {
        throw new Exception("No html element found for ('$selector')");
      }
    }

    if ($element && !$element->hasAttribute($attr)) {
      throw new Exception("Attribute not found ('$attr')");
    }

    $attr_value = ($element) ? $element->getAttribute($attr) : FALSE;

    if (trim($negate)) {
      // Not see value
      if ($attr_value == $val) {
        throw new Exception("Attribute value ('$attr_value') found");
      }
    }
    else {
      // Must see value
      if ($attr_value != $val) {
        throw new Exception("Attribute value ('$attr_value') is not ('$val')");
      }
    }
  }

  /**
   * Load/Create taxonomy term from string (vocabulary:term_name)
   * @param $value
   * @return bool|int|mixed
   * @throws Exception
   */
  public function assertTerm($value) {
    $term = FALSE;
    if (strpos($value, ':') === FALSE) {
      throw new Exception(printf('Unknown vocabulary in value: %s', $value));
    }

    $values = explode(':', $value);
    $name = trim($values[1]);
    $vocab = trim($values[0]);
    if ($terms = taxonomy_term_load_multiple_by_name($name, $vocab)) {
      $term = reset($terms);
    }

    // Create term if not found
    if (empty($term)) {
      // Sadly DrupalContext->createTerm doesn't return the newly created term, so do it ourselves
      $term = (object) array(
        'name' => $name,
        'vocabulary_machine_name' => $vocab,
        'description' => ''
      );
      $term_object = $this->termCreate($term);
      return $term_object->tid;
    }

    return $term->id();
  }

  /**
   * Casts a table with the following format to an array of Paragraph entities.
   *
   * | paragraph_id  | paragraph_type  | field_title     | ... |
   * | first_offer   | offer           | something       | ... |
   * | ...           | ...             | ...             | ... |
   */
  public function castParagraphsTable(TableNode $table)
  {

    $paragraphs = array();

    // Iterate through each of the provided rows and create a paragraph of the required type
    foreach ($table->getHash() as $row) {

      $field_data = array();
      foreach ($row as $field => $value) {
        $this->transformParagraphFieldValue($field, $value, $field_data);
      }

      $paragraph = Paragraph::create($field_data);
      if (!empty($paragraph)) {
        $paragraph->save();

        // Record this paragraph for reference else where
        $field_data['entity:id'] = $paragraph->id();
        $field_data['entity:revision'] = $paragraph->getRevisionId();
        $this->paragraphs[] = $field_data;

        // Add to return array
        $paragraphs[] = $paragraph;
      }
    }

    return $paragraphs;
  }

  /**
   * @Transform table:paragraph_field,value
   *
   * Casts a table with the following format to a Paragraph entity
   * | paragraph_field   | value                 |
   * | paragraph_id      | first_offer           |
   * | type              | offer                 |
   * | field_title       | something             |
   * | ...               | ...                   |
   */
  public function castParagraphTable(TableNode $table)
  {
    $field_data = array();
    foreach ($table->getHash() as $hash) {
      $this->transformParagraphFieldValue($hash['paragraph_field'], $hash['value'], $field_data);
    }

    $paragraph = Paragraph::create($field_data);
    if (!empty($paragraph)) {
      $paragraph->save();

      // Record this paragraph for reference else where
      $field_data['entity:id'] = $paragraph->id();
      $field_data['entity:revision'] = $paragraph->getRevisionId();
      $this->paragraphs[] = $field_data;
    }

    return $paragraph;
  }

  /**
   * Helper method to transform table field values into the correct field array.
   *
   * @param $field_name
   * @param $field_value
   * @param $field_data
   * @throws Exception
   */
  public function transformParagraphFieldValue($field_name, $field_value, &$field_data) {
    // Set the default field key
    $field_key = 'value';

    // Check for sub-keys
    if (strpos($field_name, ':') !== FALSE) {
      $keys = explode(':', $field_name);
      $field_name = $keys[0];
      $field_key = $keys[1];
    }

    if ($field_name === 'type') {
      $field_data['type'] = $field_value;
    }
    else if ($field_name === 'tag') {
      $field_data['tag'] = $field_value;
    }
    else{
      if ($field_key === 'term') {
        // If value is a taxonomy term then load/create the term and set target_id
        $term = $this->assertTerm($field_value);
        if (empty($term)) {
          throw new Exception(printf('Unable to create/load taxonomy term: ', $value));
        }
        $field_data[$field_name]['target_id'] = $term;
      }
      else if ($field_key === 'link') {
        // If this is a link field, then split out the uri and title values and add both
        if (strpos($field_value, ',') !== FALSE) {
          // Look for the last occurrence of a comma
          $p = strrpos($field_value, ',');
          $field_data[$field_name]['title'] = trim(substr($field_value, 0, $p));
          $field_data[$field_name]['uri'] = trim(substr($field_value, $p+1));
        }
        else {
          $field_data[$field_name]['uri'] = $field_value;
        }
      }
      else {
        $field_data[$field_name][$field_key] = $field_value;
      }
    }
  }

  /**
   * Checks, that current page PATH is NOT equal to specified.
   *
   * @Then /^(?:|I )should not be on "(?P<page>[^"]+)"$/
   */
  public function assertNotPageAddress($page)
  {
    $this->assertSession()->addressNotEquals($this->locatePath($page));
  }

  /**
   * @Then /^the header "([^"]*)" should be "([^"]*)"$/
   */
  public function headerShouldBe($key, $value) {

    $headers = $this->getSession()->getResponseHeaders();

    // Take the first value of the array
    if (isset($headers[$key]) && is_array($headers[$key])) {
      $header = current($headers[$key]);
      self::assertEquals($header, $value);
    }
  }

  /**
   * Check that 2 values are exactly equal.
   *
   * @param $actual
   * @param $expected
   * @param null $exceptionMessage
   */
  public static function assertEquals($actual, $expected, $exceptionMessage = NULL) {
    if ($expected !== $actual) {
      throw new \RuntimeException($exceptionMessage ? $exceptionMessage : "$expected is not equal to $actual.");
    }
  }

  /**
   * @Then /^the header "([^"]*)" should match "([^"]*)"$/
   */
  public function headerShouldMatch($key, $regex) {
    $headers = $this->getSession()->getResponseHeaders();

    // Take the first value of the array
    if (isset($headers[$key]) && is_array($headers[$key])) {
      $header = current($headers[$key]);
      if (!preg_match($regex, $header)) {
        throw new \Exception("The " . $header . " header does not match " . $regex);
      }
    }
    else {
      throw new \Exception("The " . $key . " header is not available");
    }
  }

  /**
   *  @Then /^I should(| not) see the header "([^"]*)"/
   */
  public function seeTheHeader($negate, $key) {
    $headers = $this->getSession()->getResponseHeaders();

    if (trim($negate)) {
      // Not see the header
      if (isset($headers[$key])) {
        throw new \Exception("The " . $key . " header is available and should NOT be");
      }
    }
    else {
      // Should see the header
      if (!isset($headers[$key])) {
        throw new \Exception("The " . $key . " header is not available");
      }
    }
  }

/**
  * Removes query string and reloads the page with a new one.
  *
  * @Then I reload the page with the query string :query
  */
  public function iReloadThePageWithTheQueryString($query) {
    $url = $this->getSession()->getCurrentUrl();
    $url = preg_replace('/\?.*/', '', $url);
    $this->getSession()->visit($url . "?" . $query);
  }

  /**
  * Removes query string and reloads the page.
  *
  * @Then I reload the page with no query string
  */
  public function iReloadThePageWithNoQueryString() {
    $url = $this->getSession()->getCurrentUrl();
    $url = preg_replace('/\?.*/', '', $url);
    $this->getSession()->visit($url);
  }
}

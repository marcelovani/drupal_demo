<?php

use Behat\Behat\Context\SnippetAcceptingContext;

/**
 * FeatureContext
 */
class FeatureContext implements SnippetAcceptingContext {

  /**
   * @Then I stop
   */
  public function iStop()
  {
    exit();
  }

}

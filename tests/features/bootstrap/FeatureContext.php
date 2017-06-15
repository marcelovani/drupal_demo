<?php
use Behat\Behat\Context\SnippetAcceptingContext;
use Behat\Behat\Hook\Scope\BeforeScenarioScope;
use Behat\Testwork\Hook\Scope\BeforeSuiteScope;

/**
 * FeatureContext
 */
class FeatureContext implements SnippetAcceptingContext {
  /**
   * Initializes context.
   */
  public function __construct() {
  }

  /**
   * @BeforeSuite
   */
  public static function prepareSite(BeforeSuiteScope $scope) {
    $prepare = new Prepare($scope);
    $prepare->execute();
  }

  /**
   * @var MinkContext
   */
  private $MinkContext;

  /**
   * @BeforeScenario
   *
   * @param BeforeScenarioScope $scope
   */
  public function before(BeforeScenarioScope $scope) {
    // Get the environment.
    $environment = $scope->getEnvironment();

    // Get all the contexts we need.
    $this->MinkContext = $environment->getContext('Drupal\DrupalExtension\Context\MinkContext');}
}

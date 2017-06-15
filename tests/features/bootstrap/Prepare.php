<?php
use Behat\Testwork\ServiceContainer\Configuration\ConfigurationLoader;
use Behat\Testwork\Hook\Scope\BeforeSuiteScope;
use Drupal\Driver\DrushDriver;
use Symfony\Component\Console\Input\ArgvInput;

/**
 * Prepare site.
 */
class Prepare {
  /**
   * @var BeforeSuiteScope
   */
  protected $scope;

  /**
   * behat.yml config.
   *
   * @var array
   */
  protected $config;

  /**
   * @var string
   */
  protected $profile_name;

  /**
   * Constructor.
   */
  public function __construct(BeforeSuiteScope $scope) {
    $this->scope = $scope;

    $input = new ArgvInput($_SERVER['argv']);
    $this->profile_name = $input->getParameterOption(array('--profile', '-p')) ? : 'default';

    // Load behat.yml config (without environment variable).
    $config_loader = new ConfigurationLoader(NULL, getcwd() . '/behat.yml');
    $this->config = $config_loader->loadConfiguration($this->profile_name);
  }

  /**
   * Get drush root.
   *
   * @return mixed
   * @throws \Exception
   */
  protected function getDrushRoot() {
    // Try to use environment specific drush root.
    if (!empty($this->config[1]['extensions']['Drupal\DrupalExtension']['drush']['root'])) {
      return $this->config[1]['extensions']['Drupal\DrupalExtension']['drush']['root'];
    }
    // Fall back on default config.
    if (!empty($this->config[0]['extensions']['Drupal\DrupalExtension']['drush']['root'])) {
      return $this->config[0]['extensions']['Drupal\DrupalExtension']['drush']['root'];
    }
    throw new Exception('Drush root has not been configured.');
  }

  /**
   * Run a drush command.
   *
   * @param $cmd
   * @return string
   */
  protected function drush($cmd) {
    $path = $this->getDrushRoot();
    $driver = new DrushDriver($alias = NULL, $path);
    return $driver->drush($cmd);
  }

  /**
   * Prepare site.
   */
  public function execute() {
    // Switch alternative sidebar as this is toggled on auth.
  }
}

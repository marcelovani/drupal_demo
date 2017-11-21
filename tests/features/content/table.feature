@api @table
Feature: Table
  In order to use tables to create content
  as a user,
  I want to use Table tests

  Scenario: Create content using table
    Given article content:
      | title           | body      |
      | Testing content | TEST BODY |

    Given I am on "/"
    And I should see "Testing content"
    And I should see "TEST BODY"

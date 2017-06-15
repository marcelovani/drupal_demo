@api @table
Feature: Table
  In order to use tables to create content
  as a user,
  I want to use Table tests

  Scenario: Create content using table
    Given "article" content:
      | title           | body      | path  |
      | Testing content | TEST BODY | /page |

    Given I am on "node/1"
    And the response status code should be 200
    Then print last response

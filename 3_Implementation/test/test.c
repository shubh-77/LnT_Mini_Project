#include "unity.h"
#include "header.h"

/* Update these two lines according to the project */
#define PROJECT_NAME "maturitycalculator"

/* Prototypes for all the test functions */
void test_term_deposit(void);
void test_recurring_deposit(void);
void test_ppf(void);

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions for each functionality of the maturity calculator*/
  RUN_TEST(test_term_deposit);
  RUN_TEST(test_recurring_deposit);
  RUN_TEST(test_ppf);


  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 


void test_term_deposit(void){
    TEST_ASSERT_EQUAL(556.51, calculate_term_deposit(500,5.5,2));
    TEST_ASSERT_EQUAL(5565.13, calculate_term_deposit(5000,5.5,2));
    TEST_ASSERT_EQUAL(55651.25, calculate_term_deposit(50000,5.5,2));
    TEST_ASSERT_EQUAL(0.00, calculate_term_deposit(0,5.5,2));
}

void test_recurring_deposit(void){
    TEST_ASSERT_EQUAL(12687.50,calculate_recurring_deposit(500,5.5,2));
    TEST_ASSERT_EQUAL(126875.00,calculate_recurring_deposit(5000,5.5,2));
    TEST_ASSERT_EQUAL(1268750.00,calculate_recurring_deposit(50000,5.5,2));
    TEST_ASSERT_EQUAL(0.00,calculate_recurring_deposit(0,5.5,2));
}

void test_ppf(void){
    TEST_ASSERT_EQUAL(13560.70,calculate_ppf(500,7.1,15));
    TEST_ASSERT_EQUAL(135606.97,calculate_ppf(5000,7.1,15));
    TEST_ASSERT_EQUAL(1356069.74,calculate_ppf(50000,7.1,15));
    TEST_ASSERT_EQUAL(0.00,calculate_ppf(0,7.1,15));
}








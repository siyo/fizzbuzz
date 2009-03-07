#include <stdio.h>
#include <stdint.h>
/*
 * CUnit
 * http://sourceforge.net/projects/cunit/
 */
#include "CUnit/CUnit.h"
#include "CUnit/Basic.h"

static int setup();
static int teardown();
static void test_normal();

CU_TestInfo test_fizzbuzz_array[] = {
  {"normal", test_normal},
  CU_TEST_INFO_NULL
};

CU_SuiteInfo suites_array[] = {
  {"test_fizzbuzz",setup,teardown,test_fizzbuzz_array},
  CU_SUITE_INFO_NULL
};

static int
setup()
{
  return 0;
}

static int
teardown()
{
  return 0;
}

static void
test_normal()
{
  uint16_t i;
  for(i=0; i<UINT16_MAX; i++ ){
    switch(i%15){
      case 0:
        CU_ASSERT_STRING_EQUAL("FizzBuzz",fizzbuzz(i));
        break;
      case 12:
      case 9:
      case 6:
      case 3:
        CU_ASSERT_STRING_EQUAL("Fizz",fizzbuzz(i));
        break;
      case 10:
      case 5:
        CU_ASSERT_STRING_EQUAL("Buzz",fizzbuzz(i));
        break;
      default:
        CU_ASSERT_EQUAL(i,atoi(fizzbuzz(i)));
    }
  }
}

int main(int argc, char* argv[])
{
  CU_ErrorCode errorCode;

  CU_initialize_registry();
  errorCode = CU_register_suites(suites_array);
  CU_basic_set_mode(CU_BRM_VERBOSE);
  CU_basic_run_tests();
  return 0;
}

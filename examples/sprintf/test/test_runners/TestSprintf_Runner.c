#include "unity.h"
#include "unity_fixture.h"

/* TEST_GROUP_RUNNER(Foo)
{
  RUN_TEST_CASE(Foo, TestFoo1);
  RUN_TEST_CASE(Foo, TestFoo2);
  
} */

TEST_GROUP_RUNNER(sprintf)
{
  RUN_TEST_CASE(sprintf, NoFormatOperations1);
  RUN_TEST_CASE(sprintf, InsertString1);
  RUN_TEST_CASE(sprintf, InsertString2);
  RUN_TEST_CASE(sprintf, NoFormatOperations2);
}
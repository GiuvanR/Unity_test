#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP_RUNNER(div)
{
  RUN_TEST_CASE(div, TestDiv1);
  RUN_TEST_CASE(div, TestDiv2);
  RUN_TEST_CASE(div, TestDiv3);
  RUN_TEST_CASE(div, TestDiv4);
  RUN_TEST_CASE(div, TestDiv5);
  RUN_TEST_CASE(div, TestDiv6);
}
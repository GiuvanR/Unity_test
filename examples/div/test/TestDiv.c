#include <stdio.h>
#include <stdlib.h>
#include "unity.h"
#include "unity_fixture.h"


TEST_GROUP(div);

div_t output;

TEST_SETUP(div)
{
}

TEST_TEAR_DOWN(div)
{
}

TEST(div, TestDiv1)
{
  output = div(1,1);
  TEST_ASSERT_EQUAL(1, output.quot);
}

TEST(div, TestDiv2)
{
  output = div(20,2);
  TEST_ASSERT_GREATER_THAN(5, output.quot);
}

TEST(div, TestDiv3)
{
  output = div(-5,5);
  TEST_ASSERT_LESS_THAN(0, output.quot);
}

TEST(div, TestDiv4)
{
  output = div(17,2);
  TEST_ASSERT_EQUAL(1, output.rem);
}

TEST(div, TestDiv5)
{
  output = div(10,2);
  TEST_ASSERT_EQUAL(0, output.rem);
}

TEST(div, TestDiv6){
  output = div(1,0);
  TEST_ASSERT_EQUAL(0, output.quot);
}

//#include "foo.h"
#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP(sprintf);



TEST_SETUP(sprintf)
{
}

TEST_TEAR_DOWN(sprintf)
{
}

/* TEST_GROUP(Foo);

TEST_SETUP(Foo)
{
}

TEST_TEAR_DOWN(Foo)
{
}

TEST(Foo, TestFoo1)
{
  // All of these should pass
  TEST_ASSERT_EQUAL(-2, foo(1,2));
  TEST_ASSERT_EQUAL(-1, foo(2,2));
}

TEST(Foo, TestFoo2)
{
  // This test will fail
  TEST_ASSERT_EQUAL(2, foo(1,2));
}
 */


//sprintf
TEST(sprintf, NoFormatOperations1){
  char output[5] = "";
  
  TEST_ASSERT_EQUAL(3, sprintf(output, "hey"));
  TEST_ASSERT_EQUAL_STRING("hey", output);
}

TEST(sprintf, InsertString1){
  char output[20] = "";

  TEST_ASSERT_EQUAL(12,sprintf(output, "Hello %s\n", "World"));
  TEST_ASSERT_EQUAL_STRING("Hello World\n", output);
}

TEST(sprintf, InsertString2){
  char output[20];
  memset(output, 0Xaa, sizeof output);

  TEST_ASSERT_EQUAL(12, sprintf(output, "Hello %s\n", "World"));
  TEST_ASSERT_EQUAL_STRING("Hello World\n", output);
  TEST_ASSERT_BYTES_EQUAL(0Xaa, output[13]);
}

TEST(sprintf, NoFormatOperations2){
  char output[5];

  TEST_ASSERT_EQUAL(4, sprintf(output, "hey"));
  TEST_ASSERT_EQUAL_STRING("Hey", output);
}

TEST(sprintf, test1){
  char output[10] = "";
  int a = 10;


}
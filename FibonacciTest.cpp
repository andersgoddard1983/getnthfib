#include "gmock/gmock.h"
#include "Fibonacci.h"

using namespace testing;

class FibonacciExample: public Test {
public:
  Fibonacci fibonacci;
};

TEST_F(FibonacciExample, Returns0ForFirstN) {
  auto result = fibonacci.nthFib(1);
  ASSERT_THAT(result, Eq(0));
}

TEST_F(FibonacciExample, Returns1ForSecondN) {
  auto result = fibonacci.nthFib(2);
  ASSERT_THAT(result, Eq(1));
}

TEST_F(FibonacciExample, ReturnsSumOfPreviousTwoNumberes) {
  EXPECT_THAT(fibonacci.nthFib(3), Eq(1));
  EXPECT_THAT(fibonacci.nthFib(4), Eq(2));
  EXPECT_THAT(fibonacci.nthFib(5), Eq(3));
  EXPECT_THAT(fibonacci.nthFib(6), Eq(5));
  EXPECT_THAT(fibonacci.nthFib(7), Eq(8));
  EXPECT_THAT(fibonacci.nthFib(8), Eq(13));
  EXPECT_THAT(fibonacci.nthFib(9), Eq(21));
}

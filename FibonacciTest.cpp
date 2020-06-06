class Fibonacci
{
public:
  int nthFib(int n) {
    if (n == 1) return 0;
    if (n == 2) return 1;
    return 0;
  }
};
#include "gmock/gmock.h"
using ::testing::Eq;

TEST(FibonacciExample, Returns0ForFirstN) {
  Fibonacci fibonacci;

  auto result = fibonacci.nthFib(1);

  ASSERT_THAT(result, Eq(0));
}

TEST(FibonacciExample, Returns1ForSecondN) {
  Fibonacci fibonacci;

  auto result = fibonacci.nthFib(2);

  ASSERT_THAT(result, Eq(1));
}

class Fibonacci
{
public:
  int nthfib(int n) {
    return 0;
  }
};

#include "gmock/gmock.h"

TEST(FibonacciExample, Returns0ForFirstN) {
  Fibonacci fibonacci;

  auto result = fibonacci.nthfib(1);

  ASSERT_THAT(result, testing::Eq(0));
}

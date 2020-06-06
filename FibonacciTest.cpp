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

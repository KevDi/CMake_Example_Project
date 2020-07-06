#include <gmock/gmock.h>

#include <string>
#include <vector>

#include "evolution/evolution.hpp"
using namespace testing;

TEST(ExampleTest, OneEqualsOne) { ASSERT_THAT(1, Eq(2)); }
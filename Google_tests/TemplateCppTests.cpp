#include "gtest/gtest.h"
#include "TemplateCppClass.h"
#include "lib/googlemock/include/gmock/gmock-matchers.h"

using ::testing::HasSubstr;

TEST(TemplateCppTestSuite, Example){

    ASSERT_EQ(TemplateCppClass::GetSomething(),0);
    EXPECT_THAT("somthing", HasSubstr("ome"));
}

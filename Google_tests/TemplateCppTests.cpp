#include "gtest/gtest.h"
#include "TemplateCppClass.h"

TEST(TemplateCppTestSuite, Example){

ASSERT_EQ(TemplateCppClass::GetSomething(),0);
}

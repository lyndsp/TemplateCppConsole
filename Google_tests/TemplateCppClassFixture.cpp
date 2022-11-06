#include "gtest/gtest.h"
#include "TemplateCppClass.h"

class TemplateCppClassFixture : public ::testing::Test {
protected:
    virtual void SetUp()
    {
        templateCppClass = new TemplateCppClass();
    }

    virtual void TearDown() {
        delete templateCppClass;
    }

    TemplateCppClass *templateCppClass;
};

TEST_F(TemplateCppClassFixture, ZeroEqualsZero){

    int result = templateCppClass->GetSomething();

    EXPECT_EQ(result,0);
}

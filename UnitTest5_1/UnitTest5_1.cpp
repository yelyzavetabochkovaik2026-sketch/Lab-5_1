#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\RedLine\source\repos\Lab 5_1\Lab 5_1\Lab 5_1.cpp"   
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest5_1
{
    TEST_CLASS(UnitTest5_1)
    {
    public:

        TEST_METHOD(TestK_Zero)
        {
            Assert::AreEqual(0.0, k(0, 0), 1e-9);
        }

        TEST_METHOD(TestK_XOne_YZero)
        {
            Assert::AreEqual(1.0, k(1, 0), 1e-9);
        }

        TEST_METHOD(TestK_XZero_YOne)
        {
            Assert::AreEqual(1.0, k(0, 1), 1e-9);
        }

        TEST_METHOD(TestK_XTwo_YZero)
        {
            Assert::AreEqual(2.0, k(2, 0), 1e-9);
        }

        TEST_METHOD(TestK_OneOne)
        {
            Assert::AreEqual(1.08545, k(1, 1), 1e-4);
        }
    };
}

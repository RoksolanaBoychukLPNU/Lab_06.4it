#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_06.4it/Lab_06.4it.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest641
{
    TEST_CLASS(UnitTest641)
    {
    public:
        TEST_METHOD(TestSumPositive)
        {
            double a[5] = { 1.5, -2.0, 3.25, 0.0, -7.5 };
            Assert::AreEqual(4.75, SumPositive(a, 5), 1e-9);
        }

        TEST_METHOD(TestIndexAbs)
        {
            double a[5] = { 1.5, -2.0, 3.25, 0.5, -7.5 };
            Assert::AreEqual(4, IndexMaxAbs(a, 5));
            Assert::AreEqual(3, IndexMinAbs(a, 5));
        }

        TEST_METHOD(TestProductBetween)
        {
            double a[5] = { -9.0, 2.0, -3.0, 0.5, 4.0 };
            double P;
            Assert::IsTrue(ProductBetween(a, 0, 3, P));
            Assert::AreEqual(-6.0, P, 1e-9);
        }

        TEST_METHOD(TestSortOddDesc)
        {
            double a[7] = { 0, 1, 0, 5, 0, 3, 0 };
            SortOddDesc(a, 7);
            Assert::AreEqual(5.0, a[1], 1e-9);
            Assert::AreEqual(3.0, a[3], 1e-9);
            Assert::AreEqual(1.0, a[5], 1e-9);
        }
    };
}

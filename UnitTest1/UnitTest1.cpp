#include "pch.h"
#include "CppUnitTest.h"
#include "../OOP lab 1.1/Goods.h"
#include "../OOP lab 1.1/Goods.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
    TEST_CLASS(UnitTest)
    {
    public:

        // ������� ����� cost()
        TEST_METHOD(TestGoodsCost)
        {
            Goods goods;
            goods.Init(25.50, 10);

            // ����������, �� ��������� ������������ ������� ������
            Assert::AreEqual(255.0, goods.cost(), L"Incorrect cost calculation.");
        }

        // ������� ����� setFirst()
        TEST_METHOD(TestSetFirst)
        {
            Goods goods;
            goods.setFirst(30.75);

            // ����������, �� ��������� �������������� �������� ���� first
            Assert::AreEqual(30.75, goods.getFirst(), L"Incorrect value for first field after using setFirst.");
        }

        // ������� ����� setSecond()
        TEST_METHOD(TestSetSecond)
        {
            Goods goods;
            goods.setSecond(15);

            // ����������, �� ��������� �������������� �������� ���� second
            Assert::AreEqual(15, goods.getSecond(), L"Incorrect value for second field after using setSecond.");
        }
    };
}

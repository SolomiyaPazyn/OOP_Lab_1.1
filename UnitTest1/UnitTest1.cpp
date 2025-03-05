#include "pch.h"
#include "CppUnitTest.h"
#include "../OOP lab 1.1/Goods.h"
#include "../OOP lab 1.1/Goods.cpp"
#include "../OOP lab 1.1/main.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
    TEST_CLASS(UnitTest)
    {
    public:

        // ������� ����������� ��'���� Goods
        TEST_METHOD(TestGoodsInitialization)
        {
            Goods goods;
            goods.Init(25.50, 10);

            // ����������, �� ��������� ������������ ���� first
            Assert::AreEqual(goods.GetFirst(), 25.50);

            // ����������, �� ��������� ������������ ���� second
            Assert::AreEqual(goods.GetSecond(), 10);
        }

        // ������� ����� cost()
        TEST_METHOD(TestGoodsCost)
        {
            Goods goods;
            goods.Init(25.50, 10);

            // ����������, �� ��������� ������������ ������� ������
            Assert::AreEqual(goods.cost(), 255.0);
        }

        // ������� ����� SetFirst()
        TEST_METHOD(TestSetFirst)
        {
            Goods goods;
            goods.SetFirst(30.75);

            // ����������, �� ��������� �������������� �������� ���� first
            Assert::AreEqual(goods.GetFirst(), 30.75);
        }

        // ������� ����� SetSecond()
        TEST_METHOD(TestSetSecond)
        {
            Goods goods;
            goods.SetSecond(15);

            // ����������, �� ��������� �������������� �������� ���� second
            Assert::AreEqual(goods.GetSecond(), 15);
        }
    };
}
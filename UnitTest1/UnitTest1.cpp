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

        // Тестуємо метод cost()
        TEST_METHOD(TestGoodsCost)
        {
            Goods goods;
            goods.Init(25.50, 10);

            // Перевіряємо, чи правильно обчислюється вартість товару
            Assert::AreEqual(255.0, goods.cost(), L"Incorrect cost calculation.");
        }

        // Тестуємо метод setFirst()
        TEST_METHOD(TestSetFirst)
        {
            Goods goods;
            goods.setFirst(30.75);

            // Перевіряємо, чи правильно встановлюється значення поля first
            Assert::AreEqual(30.75, goods.getFirst(), L"Incorrect value for first field after using setFirst.");
        }

        // Тестуємо метод setSecond()
        TEST_METHOD(TestSetSecond)
        {
            Goods goods;
            goods.setSecond(15);

            // Перевіряємо, чи правильно встановлюється значення поля second
            Assert::AreEqual(15, goods.getSecond(), L"Incorrect value for second field after using setSecond.");
        }
    };
}

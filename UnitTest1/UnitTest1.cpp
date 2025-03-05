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

        // Тестуємо ініціалізацію об'єкта Goods
        TEST_METHOD(TestGoodsInitialization)
        {
            Goods goods;
            goods.Init(25.50, 10);

            // Перевіряємо, чи правильно ініціалізоване поле first
            Assert::AreEqual(goods.GetFirst(), 25.50);

            // Перевіряємо, чи правильно ініціалізоване поле second
            Assert::AreEqual(goods.GetSecond(), 10);
        }

        // Тестуємо метод cost()
        TEST_METHOD(TestGoodsCost)
        {
            Goods goods;
            goods.Init(25.50, 10);

            // Перевіряємо, чи правильно обчислюється вартість товару
            Assert::AreEqual(goods.cost(), 255.0);
        }

        // Тестуємо метод SetFirst()
        TEST_METHOD(TestSetFirst)
        {
            Goods goods;
            goods.SetFirst(30.75);

            // Перевіряємо, чи правильно встановлюється значення поля first
            Assert::AreEqual(goods.GetFirst(), 30.75);
        }

        // Тестуємо метод SetSecond()
        TEST_METHOD(TestSetSecond)
        {
            Goods goods;
            goods.SetSecond(15);

            // Перевіряємо, чи правильно встановлюється значення поля second
            Assert::AreEqual(goods.GetSecond(), 15);
        }
    };
}
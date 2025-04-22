//////////////////////////////////////////////////////////////////////////////
// Goods.h
// заголовний файл – визначення класу

#pragma once
#include <string>

class Goods {
private:
    double first;   // ціна товару (дробове додатне число)
    int second;     // кількість одиниць товару (ціле додатне число)

public:
    // Методи доступу
    double getFirst() const;
    int getSecond() const;

    bool setFirst(double f);
    bool setSecond(int s);

    // Ініціалізація
    bool Init(double f, int s);

    // Методи введення та виведення
    void Read();
    void Display() const;

    // Обчислення загальної вартості товару
    double cost() const;
};

// Зовнішня функція для створення об'єкта Goods
Goods makeGoods(double first, int second);

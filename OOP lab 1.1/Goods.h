//////////////////////////////////////////////////////////////////////////////
// Goods.h
// заголовний файл Ц визначенн€ класу
#pragma once

class Goods
{
private:
    double first;   // ц≥на товару (дробове додатне число)
    int second;     // к≥льк≥сть одиниць товару (ц≥ле додатне число)

public:
    double GetFirst() const;
    int GetSecond() const;

    void SetFirst(double value);
    void SetSecond(int value);

    void Init(double first, int second);
    double cost() const;
};


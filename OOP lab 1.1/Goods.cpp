//////////////////////////////////////////////////////////////////////////////
// Goods.cpp
// файл реалізації – реалізація методів класу
#include "Goods.h"

double Goods::GetFirst() const {
    return first;
}

int Goods::GetSecond() const {
    return second;
}

void Goods::SetFirst(double value) {   
    first = (value > 0) ? value : 0;    // Перевірка на додатність значення 
}

void Goods::SetSecond(int value) {
    second = (value > 0) ? value : 0;
}

void Goods::Init(double first, int second) {
    SetFirst(first);
    SetSecond(second);
}

double Goods::cost() const {   // обчислюється загальна вартість
    return first * second;
}


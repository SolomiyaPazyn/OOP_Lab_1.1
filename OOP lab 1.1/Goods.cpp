//////////////////////////////////////////////////////////////////////////////
// Goods.cpp
// файл реалізації – реалізація методів класу
#include "Goods.h"
#include <iostream>
#include <stdexcept>

using namespace std;

// Методи доступу
double Goods::getFirst() const {
    return first;
}

int Goods::getSecond() const {
    return second;
}

bool Goods::setFirst(double f) {
    if (f > 0) {
        first = f;
        return true;
    }
    else {
        cout << "Error: The price must be a positive number." << endl;
        return false;
    }
}


bool Goods::setSecond(int s) {
    if (s > 0) {
        second = s;
        return true;
    }
    else {
        cout << "Error: The quantity must be a positive integer." << endl;
        return false;
    }
}


bool Goods::Init(double f, int s) {
    // Використання існуючих методів setFirst і setSecond
    return setFirst(f) && setSecond(s);
}




// Введення з клавіатури
void Goods::Read() {
    double f;
    int s;

    do {
        cout << "Enter price (positive value): ";
        cin >> f;
        cout << "Enter quantity (positive integer): ";
        cin >> s;
    } while (!Init(f, s));
}

// Виведення на екран
void Goods::Display() const {
    cout << "Price: " << first << " UAH" << endl;
    cout << "Quantity: " << second << " pcs." << endl;
    cout << "Total cost: " << cost() << " UAH" << endl;
}

// Обчислення вартості товару
double Goods::cost() const {
    return first * second;
}

// Зовнішня функція для створення об'єкта Goods
Goods makeGoods(double first, int second) {
    Goods g;
    if (!g.Init(first, second)) {
        cout << "Invalid parameters for Goods: both price and quantity must be positive." << endl;
        return Goods(); // Повертає об'єкт з дефолтними значеннями.
    }
    return g;
}



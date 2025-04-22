//////////////////////////////////////////////////////////////////////////////
// main.cpp
// головний файл проекту – функція main

#include <iostream>
#include "Goods.h"

using namespace std;

int main() {
    try {
        cout << "=== Goods Class Demonstration ===" << endl;

        // Створення об'єкта через зовнішню функцію makeGoods()
        Goods g1 = makeGoods(25.5, 10);
        g1.Display();

        // Використання методів класу
        Goods g2;
        g2.Read();
        g2.Display();

        // Зміна значень через методи доступу
        g2.setFirst(15.75);
        g2.setSecond(5);
        g2.Display();

    }
    catch (const exception& e) {
        cerr << "Error: " << e.what() << endl;
        return 1;
    }

    return 0;
}

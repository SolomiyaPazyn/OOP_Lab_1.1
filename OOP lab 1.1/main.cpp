//////////////////////////////////////////////////////////////////////////////
// main.cpp
// головний файл проекту – функція main
#include <iostream>
#include "Goods.h"

int main() {
    Goods g1;
    g1.Init(25.50, 10);

    std::cout << "Price of the goods: " << g1.GetFirst() << " UAH." << std::endl;
    std::cout << "Quantity: " << g1.GetSecond() << " pcs." << std::endl;
    std::cout << "Total cost: " << g1.cost() << " UAH." << std::endl;

    return 0;
}

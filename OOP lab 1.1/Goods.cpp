//////////////////////////////////////////////////////////////////////////////
// Goods.cpp
// ���� ��������� � ��������� ������ �����
#include "Goods.h"

double Goods::GetFirst() const {
    return first;
}

int Goods::GetSecond() const {
    return second;
}

void Goods::SetFirst(double value) {   
    first = (value > 0) ? value : 0;    // �������� �� ��������� �������� 
}

void Goods::SetSecond(int value) {
    second = (value > 0) ? value : 0;
}

void Goods::Init(double first, int second) {
    SetFirst(first);
    SetSecond(second);
}

double Goods::cost() const {   // ������������ �������� �������
    return first * second;
}


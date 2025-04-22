//////////////////////////////////////////////////////////////////////////////
// Goods.h
// ���������� ���� � ���������� �����

#pragma once
#include <string>

class Goods {
private:
    double first;   // ���� ������ (������� ������� �����)
    int second;     // ������� ������� ������ (���� ������� �����)

public:
    // ������ �������
    double getFirst() const;
    int getSecond() const;

    bool setFirst(double f);
    bool setSecond(int s);

    // �����������
    bool Init(double f, int s);

    // ������ �������� �� ���������
    void Read();
    void Display() const;

    // ���������� �������� ������� ������
    double cost() const;
};

// ������� ������� ��� ��������� ��'���� Goods
Goods makeGoods(double first, int second);

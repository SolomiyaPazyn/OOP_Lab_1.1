//////////////////////////////////////////////////////////////////////////////
// Goods.h
// ���������� ���� � ���������� �����
#pragma once

class Goods
{
private:
    double first;   // ���� ������ (������� ������� �����)
    int second;     // ������� ������� ������ (���� ������� �����)

public:
    double GetFirst() const;
    int GetSecond() const;

    void SetFirst(double value);
    void SetSecond(int value);

    void Init(double first, int second);
    double cost() const;
};


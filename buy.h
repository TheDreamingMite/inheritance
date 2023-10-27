// ������������ ��� ������������ ������ Buy ��� ������ Product
#ifndef BUY_H
#define BUY_H

#include "product.h"

class Buy : public Product // �������� ������������
{
private:
    int    sum; // ���������� ����������� ������ � ��.
    double sum_price, // ���� �� ���� ��������� �����   
        sum_weight; // ����� ���
public:
    Buy(); // �����������

    void setSum(const int&); // ���������� ���������� ����������� ������
    int getSum() const; // ���������� ���������� ����������� ������

    double getSumPrice() const; // ���������� ���� �� ���� ��������� �����

    double getSumWeight() const; // ���������� ����� ��� �������
};

#endif BUY_H
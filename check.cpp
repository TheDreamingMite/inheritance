// supermarket.cpp: ���������� ����� ����� ��� ����������� ����������.

#include "stdafx.h"
#include <iostream>
using namespace std;

#include "check.h"  // ������������ ���� ������������ ������ Check �� ������ Buy

int main(int argc, char* argv[])
{
    setlocale(LC_ALL, "rus");

    Check product; // ������ ������ ������

    product.setName("\"���������\" ��������"); // ������������� �������� ��������
    product.setPrice(12); // ���� ��������
    product.setWeight(1);   // ���

    product.setSum(30); // ������� ��.

    product.printProductInfo(); //��� ��������
    product.printBuyInfo(); // ��� �������

    system("pause");
    return 0;
}
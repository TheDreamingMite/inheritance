// ������������ ���� ������������ ������ Check ��� ������ Buy
#ifndef CHECK_H
#define CHECK_H

#include "buy.h"

class Check : public Buy // �������� ������������
{
public:
    void printProductInfo()
    {
        cout << "�����: " << getName() << endl;
        cout << "����:  " << getPrice() << " ���\n";
        cout << "���:   " << getWeight() << " ��\n\n";
    }

    void printBuyInfo()
    {
        cout << "������ �������: " << getSum() << " ��\n";
        cout << "�� �����:       " << getSumPrice() << " ���\n";
        cout << "����� ���:      " << getSumWeight() << " ��\n\n";
    }

};
#endif CHECK_H
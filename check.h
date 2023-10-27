// заголовочный файл производного класса Check для класса Buy
#ifndef CHECK_H
#define CHECK_H

#include "buy.h"

class Check : public Buy // открытое наследование
{
public:
    void printProductInfo()
    {
        cout << "Товар: " << getName() << endl;
        cout << "Цена:  " << getPrice() << " грн\n";
        cout << "Вес:   " << getWeight() << " кг\n\n";
    }

    void printBuyInfo()
    {
        cout << "Товара куплено: " << getSum() << " шт\n";
        cout << "На сумму:       " << getSumPrice() << " грн\n";
        cout << "Общий вес:      " << getSumWeight() << " кг\n\n";
    }

};
#endif CHECK_H
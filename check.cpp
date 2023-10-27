// supermarket.cpp: определяет точку входа для консольного приложения.

#include "stdafx.h"
#include <iostream>
using namespace std;

#include "check.h"  // заголовочный файл производного класса Check от класса Buy

int main(int argc, char* argv[])
{
    setlocale(LC_ALL, "rus");

    Check product; // создаём объект класса

    product.setName("\"Уральские\" пельмени"); // устанавливаем название продукта
    product.setPrice(12); // цена продукта
    product.setWeight(1);   // вес

    product.setSum(30); // куплено шт.

    product.printProductInfo(); //чек продукта
    product.printBuyInfo(); // чек покупки

    system("pause");
    return 0;
}
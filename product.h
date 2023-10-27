#ifndef PRODUCT_H
#define PRODUCT_H

class Product
{
private:
    char name[50]; // ��� ������
    double price, // ����
        weight; // ��� 1 ��.
public:
    Product(); // �����������

    void setName(const char*); // ���������� ��� ������
    const char* getName() const; // ���������� ��� ������

    void setPrice(const double&); // ���������� ���� ������
    double getPrice() const; // ���������� ���� ������

    void setWeight(const double&); // ���������� ��� 1 ��. ������
    double getWeight() const; // ���������� ��� 1 ��. ������
};

#endif  PRODUCT_H
### Наследование
## Пример работы супермаркета
# Идея:
* класс Product, который имеет три элемент-данных — имя, цена и вес товара (базовый класс для всех классов);
* класс  Buy, содержащий данные о количестве покупаемого товара в штуках, о цене за весь купленный товар и  о весе товара (производный класс для класса Product и базовый класс для класса Check);
* класс Check, не содержащий никаких элемент-данных. Данный класс должен выводить на экран информацию о товаре и о покупке ( производный класс для класса Buy);
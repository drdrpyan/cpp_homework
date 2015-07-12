#include <iostream>
#include "Pizza.h"
using namespace std;

Pizza::Pizza(int t, int size, int top)
{
	pizzaType = t;
	pizzaSize = size;
	topping = top;
}
Pizza::Pizza(int size)
{
	pizzaSize = size;
}
Pizza::Pizza(void)
{
}
Pizza::~Pizza(void)
{
}
void Pizza::getType(int t)
{
	pizzaType = t;
}
void Pizza::getSize(int size)
{
	if(size<1 || size>3)
	{
		cout << "�߸��� ������ �Է�" << endl;
		return;
	}
	else
		pizzaSize = size;
}
void Pizza::getTopping(int top)
{
	topping = top;
}

int Pizza::retSize()
{
	return pizzaSize;
}
int Pizza::retTopping()
{
	return topping;
}
int Pizza::retType()
{
	return pizzaType;
}

void Pizza::outputDescription()
{
	cout << "����" << endl;
	
	cout << "���� ���� : ";
	if(pizzaType==1)
		cout << "�� ����" << endl;
	else if(pizzaType==2)
		cout << "�� ����" << endl;
	else
		cout << "Error" << endl;
	
	cout << "���� ũ�� : ";
	if(pizzaSize==1)
		cout << "��" << endl;
	else if(pizzaSize==2)
		cout << "��" << endl;
	else if(pizzaSize==3)
		cout << "��" << endl;

	cout << "���� ġ�� ���� �� : " << topping << endl;

	cout << "���� : " << computePrice() << endl;
}

int Pizza::computePrice()
{
	if(pizzaSize == 1)
		return 1000+topping*200;
	else if(pizzaSize == 2)
		return 1400+topping*300;
	else if(pizzaSize == 3)
		return 2000+topping*450;
	else
		cout << "Error" << endl;
}
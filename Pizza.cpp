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
		cout << "잘못된 사이즈 입력" << endl;
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
	cout << "피자" << endl;
	
	cout << "피자 종류 : ";
	if(pizzaType==1)
		cout << "씬 피자" << endl;
	else if(pizzaType==2)
		cout << "팬 피자" << endl;
	else
		cout << "Error" << endl;
	
	cout << "피자 크기 : ";
	if(pizzaSize==1)
		cout << "소" << endl;
	else if(pizzaSize==2)
		cout << "중" << endl;
	else if(pizzaSize==3)
		cout << "대" << endl;

	cout << "피자 치즈 토핑 수 : " << topping << endl;

	cout << "가격 : " << computePrice() << endl;
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
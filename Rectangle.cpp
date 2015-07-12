#include "Rectangle.h"
#include <iostream>
using namespace std;


Rectangle::Rectangle(void)
{
}

void Rectangle::initRectangle()
{
	cout << "����1�� �Է��Ͻʽÿ�." << endl;
	cin >> width1;
	cout << "����2�� �Է��Ͻʽÿ�." << endl;
	cin >> width2;
	cout << "���θ� �Է��Ͻʽÿ�." << endl;
	cin >> height;
}

double Rectangle::computeArea(void)
{
	return ((width1 + width2) * height / 2);
}


int Rectangle::wLongerThanH(void)
{
	double width;
	width = (width1>width2)?width1:width2;
	
	if(width>height)
		return 1;
	else if(width<height)
		return 0;
	else
		return -1;
}

int Rectangle::rectType(void)
{
	if(width1 != width2)
		return 1;
	else if(width1 != width2)
		return 2;
	else
		return 3;
}

Rectangle::~Rectangle(void)
{
}

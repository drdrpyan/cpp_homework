#pragma once
class Rectangle
{
private:
	double width1;
	double width2;
	double height;

public:
	Rectangle(void);
	void initRectangle(void);
	double computeArea(void);
	int wLongerThanH(void);
	int rectType(void);

	~Rectangle(void);
};


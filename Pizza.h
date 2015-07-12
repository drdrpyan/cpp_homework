#pragma once
class Pizza
{
private:
	int pizzaType;
	int pizzaSize;
	int topping;

public:
	Pizza(int t, int size, int top);
	Pizza(int size);
	Pizza(void);
	void getType(int t);
	void getSize(int size);
	void getTopping(int top);
	int retType();
	int retSize();
	int retTopping();
	void outputDescription();
	int computePrice();
	
	~Pizza(void);
};

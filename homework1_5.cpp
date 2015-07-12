#include <iostream>
using namespace std;

double pound_to_kilogram(double pound);
double inch_to_centimeter(double inch);
int is_standardWeight(double weight, double height);
double hatSize(double weight, double height);

int main()
{
	double weight, height;
	int age;

	cout << "weight?(lb) ";
	cin >> weight;
	cout << "height?(in) ";
	cin >> height;
	cout << "age? ";
	cin >> age;

	weight = pound_to_kilogram(weight);
	height = inch_to_centimeter(height);
	
	switch (is_standardWeight(weight,height))
	{
		case 1:
			cout << "저체중입니다." << endl;
			break;
		case 2:
			cout << "표준체중입니다." << endl;
			break;
		case 3:
			cout << "비만입니다." << endl;
			break;
		default:
			cout << "ERROR" << endl;
	}

	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);

	cout << "모자 사이즈는 " << hatSize(weight,height) << " 입니다." << endl;
	system("pause");

	return 0;
}

double pound_to_kilogram(double pound)
{
	return (pound*0.453592);
}
double inch_to_centimeter(double inch)
{
	return (inch*2.54);
}
int is_standardWeight(double weight, double height)
{
	double result;
	result = (height-100)*0.9;

	if(result > weight) return 1;
	else if(result == weight) return 2;
	else if(result < weight) return 3;
	return 0;
}
double hatSize(double weight, double height)
{
	return ( (weight/height)*2.9 );
}

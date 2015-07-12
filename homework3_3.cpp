#include <iostream>
#include "Pizza.h"
using namespace std;

int main()
{
	Pizza pizza1, pizza2;
	int t, size, top;

	pizza1 = Pizza(1, 1, 5);
	
	cout << "피자 유형?(1.씬 피자 2.팬 피자)" << endl;
	cin >> t;
	pizza2.getType(t);
	cout << "피자 사이즈?(1.소 2.중 3.대)" << endl;
	cin >> size;
	pizza2.getSize(size);
	cout << "피자 토핑 수?" << endl;
	cin >> top;
	pizza2.getTopping(top);

	cout << "pizza1의 정보" << endl;
	pizza1.outputDescription();
	cout << endl;
	cout << "pizza2의 정보" << endl;
	pizza2.outputDescription();

	system("pause");
	return 0;
}
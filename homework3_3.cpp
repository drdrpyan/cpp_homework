#include <iostream>
#include "Pizza.h"
using namespace std;

int main()
{
	Pizza pizza1, pizza2;
	int t, size, top;

	pizza1 = Pizza(1, 1, 5);
	
	cout << "���� ����?(1.�� ���� 2.�� ����)" << endl;
	cin >> t;
	pizza2.getType(t);
	cout << "���� ������?(1.�� 2.�� 3.��)" << endl;
	cin >> size;
	pizza2.getSize(size);
	cout << "���� ���� ��?" << endl;
	cin >> top;
	pizza2.getTopping(top);

	cout << "pizza1�� ����" << endl;
	pizza1.outputDescription();
	cout << endl;
	cout << "pizza2�� ����" << endl;
	pizza2.outputDescription();

	system("pause");
	return 0;
}
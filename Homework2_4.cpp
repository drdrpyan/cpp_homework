#include <iostream>
#include "Rectangle.h"
using namespace std;

int main()
{
	int flag;
	//Ŭ���� ����
	Rectangle rect1, rect2;

	//�� Ŭ������ ��� �ʱ�ȭ
	cout << "rect1�� ����, ����" << endl;
	rect1.initRectangle();
	cout << "rect2�� ����, ���� " << endl;
	rect2.initRectangle();

	//���� ���
	cout << "rec1�� ����: " << rect1.computeArea() << endl;

	//����, ������ ������� �� ū�� �Ǵ�
	flag = rect1.wLongerThanH();
	if(flag==1)
		cout << "rect1�� ���ΰ� �� ���." << endl;
	else if(flag==0)
		cout << "rect1�� ���ΰ� �� ���." << endl;
	else
		cout << "rect1�� ���ο� ���δ� �Ȱ���." << endl;

	//�簢���� ���� �Ǵ�
	flag = rect1.rectType();
	switch(flag)
	{
	case 1:
		cout << "rect1�� ��ٸ���" << endl;
		break;
	case 2:
		cout << "rect2�� ���簢��" << endl;
		break;
	case 3:
		cout << "rect3�� ���簢��" << endl;
		break;
	}


	//���� ��
	double area1 = rect1.computeArea();
	double area2 = rect2.computeArea();

	if(area1>area2)
		cout << "rect1�� ���̰� �� ũ��." << endl;
	else if(area1>area2)
		cout << "rect2�� ���̰� �� ũ��." << endl;
	else
		cout << "�� �簢���� ���̰� ����." << endl;


	system("pause");
	return 0;
}
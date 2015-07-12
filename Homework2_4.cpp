#include <iostream>
#include "Rectangle.h"
using namespace std;

int main()
{
	int flag;
	//클래스 생성
	Rectangle rect1, rect2;

	//각 클래스의 멤버 초기화
	cout << "rect1의 가로, 세로" << endl;
	rect1.initRectangle();
	cout << "rect2의 가로, 세로 " << endl;
	rect2.initRectangle();

	//넓이 계산
	cout << "rec1의 넓이: " << rect1.computeArea() << endl;

	//가로, 세로중 어느것이 더 큰지 판단
	flag = rect1.wLongerThanH();
	if(flag==1)
		cout << "rect1의 가로가 더 길다." << endl;
	else if(flag==0)
		cout << "rect1의 세로가 더 길다." << endl;
	else
		cout << "rect1의 가로와 세로는 똑같다." << endl;

	//사각형의 유형 판단
	flag = rect1.rectType();
	switch(flag)
	{
	case 1:
		cout << "rect1은 사다리꼴" << endl;
		break;
	case 2:
		cout << "rect2은 직사각형" << endl;
		break;
	case 3:
		cout << "rect3은 정사각형" << endl;
		break;
	}


	//넓이 비교
	double area1 = rect1.computeArea();
	double area2 = rect2.computeArea();

	if(area1>area2)
		cout << "rect1의 넓이가 더 크다." << endl;
	else if(area1>area2)
		cout << "rect2의 넓이가 더 크다." << endl;
	else
		cout << "두 사각형의 넓이가 같다." << endl;


	system("pause");
	return 0;
}
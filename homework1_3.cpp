#include <iostream>
using namespace std;

int main()
{
	int flag = 0;
	int dan;

	do{
		cout << "구구단 출력 프로그램\n"
			 << "모든 단 출력하기(1)\n"
			 << "선택한 단 출력하기(2)\n"
			 << "종료(3)\n";
		cout << "숫자를 입력하세요.(1~3) ";
		cin >> flag;

		if(flag<1 && flag>3)
			continue;
		else if(flag == 1)
		{
			for(int i=2; i<=9; ++i)
				{
					cout << i << "단\n";
					for(int j=1; j<=9; ++j)
						cout << i << " * " << j << " = " << i*j << "\n";
					cout << "\n";
				}
		}
		else if(flag == 2)
		{
			cout << "출력하려는 단을 입력하세요.\n";
			cin >> dan;
			cout << dan <<"단\n";
			for(int j=1; j<=9; ++j)
				cout << dan << " * " << j << " = " << dan*j << "\n";
			cout << "\n";
		}
		else if(flag == 3)
		{
			cout << "종료합니다.\n";
			break;
		}
	}while(flag>=1 && flag<=3);

	return 0;
}
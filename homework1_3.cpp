#include <iostream>
using namespace std;

int main()
{
	int flag = 0;
	int dan;

	do{
		cout << "������ ��� ���α׷�\n"
			 << "��� �� ����ϱ�(1)\n"
			 << "������ �� ����ϱ�(2)\n"
			 << "����(3)\n";
		cout << "���ڸ� �Է��ϼ���.(1~3) ";
		cin >> flag;

		if(flag<1 && flag>3)
			continue;
		else if(flag == 1)
		{
			for(int i=2; i<=9; ++i)
				{
					cout << i << "��\n";
					for(int j=1; j<=9; ++j)
						cout << i << " * " << j << " = " << i*j << "\n";
					cout << "\n";
				}
		}
		else if(flag == 2)
		{
			cout << "����Ϸ��� ���� �Է��ϼ���.\n";
			cin >> dan;
			cout << dan <<"��\n";
			for(int j=1; j<=9; ++j)
				cout << dan << " * " << j << " = " << dan*j << "\n";
			cout << "\n";
		}
		else if(flag == 3)
		{
			cout << "�����մϴ�.\n";
			break;
		}
	}while(flag>=1 && flag<=3);

	return 0;
}
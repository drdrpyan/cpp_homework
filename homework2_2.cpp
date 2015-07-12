#include <iostream>
using namespace std;

int getTotal(int *arr, int len);
double getAverage(int *arr, int len);
int getMaximum(int *arr, int len);
int getMinimum(int *arr, int len);
void getOdd(int *arr, int len);

int main()
{
	int len;
	int arr[1024];

	cout << "�Է��Ϸ��� ������ ������ �Է��ϼ���." << endl;
	cin >> len;

	cout << "���ڸ� �Է��ϼ���." << endl;
	for(int i=0; i<len; i++)
		cin >> arr[i];

	cout << "��� ������ ��: " << getTotal(arr, len) << endl;
	cout << "���ҵ��� ���: " << getAverage(arr, len) << endl;
	cout << "�ִ밪: " << getMaximum(arr, len) << endl;
	cout << "�ּҰ�: " << getMinimum(arr, len) << endl;
	cout << "���ҵ� �� Ȧ���� ��: " << endl;
	getOdd(arr, len);

	return 0;
}

int getTotal(int *arr, int len)
{
	int total = 0;
	for(int i=0; i<len; ++i)
		total+=arr[i];
	return total;
}

double getAverage(int *arr, int len)
{
	return getTotal(arr, len)/len;
}

int getMaximum(int *arr, int len)
{
	int max = arr[0];
	for(int i=1; i<len; ++i)
		if(arr[i]>max)
			max=arr[i];
	return max;
}

int getMinimum(int *arr, int len)
{
	int min = arr[0];
	for(int i=1; i<len; ++i)
		if(arr[i]<min)
			min=arr[i];
	return min;
}

void getOdd(int *arr, int len)
{
	for(int i=0; i<len; ++i)
		if(arr[i]%2)
			cout << arr[i] << endl;
}
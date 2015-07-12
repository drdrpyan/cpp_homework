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

	cout << "입력하려는 숫자의 개수를 입력하세요." << endl;
	cin >> len;

	cout << "숫자를 입력하세요." << endl;
	for(int i=0; i<len; i++)
		cin >> arr[i];

	cout << "모든 원소의 합: " << getTotal(arr, len) << endl;
	cout << "원소들의 평균: " << getAverage(arr, len) << endl;
	cout << "최대값: " << getMaximum(arr, len) << endl;
	cout << "최소값: " << getMinimum(arr, len) << endl;
	cout << "원소들 중 홀수인 값: " << endl;
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
//sorting
#include <iostream>
using namespace std;

void copyArray(int* des, int* src, int len);
void selectSorting(int* arr, int len);
void insertionSorting(int* arr, int len);
void bubbleSorting(int* arr, int len);
void quickSorting(int* arr, int srt, int end);

int main()
{
	int arr[] = {44, 10, 22, 3, 4, 77, 99, 50, 2, 8};
	int len = sizeof(arr)/sizeof(arr[0]);
	int tempArr[50];

	//���� �迭 arr ���
	cout << "arr"  << endl;
	for(int i=0; i<len; ++i)
		cout << arr[i] << " ";
	cout << endl;

	//��������, ���
	cout << "�������� ���" << endl;
	copyArray(tempArr, arr, len);
	selectSorting(tempArr, len);
	for(int i=0; i<len; ++i)
		cout << tempArr[i] << " ";
	cout << endl;

	cout << "�������� ���" << endl;
	copyArray(tempArr, arr, len);
	insertionSorting(tempArr, len);
	for(int i=0; i<len; ++i)
		cout << tempArr[i] << " ";
	cout << endl;

	cout << "�������� ���" << endl;
	copyArray(tempArr, arr, len);
	bubbleSorting(tempArr, len);
	for(int i=0; i<len; ++i)
		cout << tempArr[i] << " ";
	cout << endl;

	cout << "������ ���" << endl;
	copyArray(tempArr, arr, len);
	quickSorting(tempArr, 0, len-1);
	for(int i=0; i<len; ++i)
		cout << tempArr[i] << " ";
	cout << endl;

	return 0;
}

//���� �迭 arr�� tempArr�� ����.
void copyArray(int* des, int* src, int len)
{
	for(int i=0; i<len; ++i)
		des[i] = src[i];
}

//���� ����
void selectSorting(int* arr, int len)
{
	int min_i;
	int temp;

	for(int i=0; i<len; ++i)
	{
		min_i=i;
		for(int j=i; j<len; ++j)
		{
			if(arr[min_i]>arr[j])
				min_i=j;
		}
		temp = arr[i];
		arr[i] = arr[min_i];
		arr[min_i] = temp;
	}
}

//���� ����
void insertionSorting(int* arr, int len)
{
	int j, temp;
	for(int i=1; i<len; ++i)
	{
		temp = arr[j=i];
		while( --j>=0 && temp<arr[j] )
			arr[j+1] = arr[j];
		arr[j+1] = temp;
	}
}

//���� ����
void bubbleSorting(int* arr, int len)
{
	int temp;
	for(int end = len; end>0; --end)
		for(int i=1; i<end; ++i)
			if(arr[i-1]>arr[i])
			{
				temp = arr[i-1];
				arr[i-1] = arr[i];
				arr[i] = temp;
			}
}

//�� ����
void quickSorting(int* arr, int srt, int end)
{
	if(srt>=end)
		return;
	int pivot = arr[srt];
	int i = srt+1;
	int j = end;
	int temp;

	while(i<=j)
	{
		for( ; i<=end && arr[i]<=pivot; ++i);
		for( ; j>=srt && arr[j]>pivot; --j);

		if(i<j)
		{
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
		}
	}

	arr[srt] = arr[j];
	arr[j] = pivot;

	quickSorting(arr, srt, j-1);
	quickSorting(arr, j+1, end);
}
#include <iostream>
using std::cout;
using std::endl;

template<class T>
void sort(T a[], int numberUsed);

template<class T>
void swapValues(T& variable1, T& variable2);

template<class T>
int indexOfSmallest(const T a[], int startIndex, int numberUsed);

#include "sort.cpp"

int main()
{
	int i;

	//정수형 배열의 출력, 정렬뒤 출력
	int a[10] = {9,8,7,6,5,1,2,3,0,4};
	cout << "Unsorted intergers:\n";
	for(i=0; i<10; i++)
		cout << a[i] << " ";
	cout << endl;

	sort(a, 10);
	cout << "In sorted order the integers are:\n";
	for(i=0; i<10; i++)
		cout << a[i] << " ";
	cout << endl;

	//double형 배열의 출력, 정렬뒤 출력
	double b[5] = {5.5, 5.4, 1.1, 3.3, 2.2};
	cout << "Unsorted doubles:\n";
	for(i=0; i<5; i++)
		cout << b[i] << " ";
	cout << endl;

	sort(b, 5);
	cout << "In sorted order the doubles are:\n";
	for(i=0; i<5; i++)
		cout << b[i] << " ";
	cout << endl;

	//char형 배열의 출력, 정렬뒤 출력
	char c[7] = {'G', 'E', 'N', 'E', 'R', 'I', 'C'};
	cout << "Unsorted caracters:\n";
	for(i=0; i<7; i++)
		cout << c[i] << " ";
	cout << endl;

	sort(c, 7);
	cout << "In sorted order the characters are:\n";
	for(i=0; i<7; i++)
		cout << c[i] << " ";
	cout << endl;

	system("pause");
	return 0;
}
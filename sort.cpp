//입력받은 배열 a를 numberUsed만큼의 원소갯수를 정렬한다.
template<class T>
void sort(T a[], int numberUsed)
{
	int indexOfNextSmallest;
	for(int index = 0; index<numberUsed-1; index++)
	{
		//해당 index의 원소에서 그 원소보다 뒤에 있는 원소들 중 가장 작은 값을 찾는다.
		indexOfNextSmallest = indexOfSmallest(a, index, numberUsed);
		//찾은 가장 작은 원소와 현재 index값의 원소의 값을 서로 바꾼다.
		swapValues(a[index], a[indexOfNextSmallest]);
	}
}

//입력받은 두 값을 서로 바꿔준다.
template<class T>
void swapValues(T& variable1, T& variable2)
{
	T temp;
	temp = variable1;
	variable1 = variable2;
	variable2 = temp;
}

//입력받은 배열에서 startIndex 뒤에 있는 원소들 중 가장 작은 원소의 index를 찾아 반환한다.
template<class T>
int indexOfSmallest(const T a[], int startIndex, int numberUsed)
{
	T min = a[startIndex];
	int indexOfMin = startIndex;
	
	//입력받은 startIndex뒤의 원소들 중에서 가장 작은 값을 지닌 index값을 찾는다.
	for(int index = startIndex+1; index<numberUsed; index++)
	{
		if(a[index]<min)
		{
			min=a[index];
			indexOfMin = index;
		}
	}

	return indexOfMin;
}
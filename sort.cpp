//�Է¹��� �迭 a�� numberUsed��ŭ�� ���Ұ����� �����Ѵ�.
template<class T>
void sort(T a[], int numberUsed)
{
	int indexOfNextSmallest;
	for(int index = 0; index<numberUsed-1; index++)
	{
		//�ش� index�� ���ҿ��� �� ���Һ��� �ڿ� �ִ� ���ҵ� �� ���� ���� ���� ã�´�.
		indexOfNextSmallest = indexOfSmallest(a, index, numberUsed);
		//ã�� ���� ���� ���ҿ� ���� index���� ������ ���� ���� �ٲ۴�.
		swapValues(a[index], a[indexOfNextSmallest]);
	}
}

//�Է¹��� �� ���� ���� �ٲ��ش�.
template<class T>
void swapValues(T& variable1, T& variable2)
{
	T temp;
	temp = variable1;
	variable1 = variable2;
	variable2 = temp;
}

//�Է¹��� �迭���� startIndex �ڿ� �ִ� ���ҵ� �� ���� ���� ������ index�� ã�� ��ȯ�Ѵ�.
template<class T>
int indexOfSmallest(const T a[], int startIndex, int numberUsed)
{
	T min = a[startIndex];
	int indexOfMin = startIndex;
	
	//�Է¹��� startIndex���� ���ҵ� �߿��� ���� ���� ���� ���� index���� ã�´�.
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
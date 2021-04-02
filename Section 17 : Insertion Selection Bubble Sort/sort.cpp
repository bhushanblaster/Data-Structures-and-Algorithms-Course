void insertionSort(int* arr, int size)
{
	for (int i = 1; i < size; i++)
	{
		int j = i;
		while (j > 0 && arr[j] > arr[j - 1])
		{
			swap(arr[j], arr[j - 1]);
			j--;
		}
	}
}
void selectionSort(int* arr, int size)
{
	for (int i = 0; i < size-1; i++)
	{
		int minIndex = i;
		for (int j = i + 1; j < size; j++)
		{
			if (arr[j] < arr[minIndex])
			{
				minIndex = j;
			}
		}
		if (i != minIndex)
			swap(arr[i], arr[minIndex]);
	}
}

void bubbleSort(int *arr,int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				swap(arr[j], arr[j+1]);
			}
		}
	}
}

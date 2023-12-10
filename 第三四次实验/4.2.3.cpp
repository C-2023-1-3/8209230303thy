#include<iostream>
using namespace std;
void change(int arr[],int size)
{   
	int temp = 0;
	for (int i = 0; i < size-1; i++)
	{
		for (int j = 0; j < size - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
			temp = arr[j + 1];
			arr[j + 1] = arr[j];
			arr[j] = temp;
			}
		}
	}
}

int main()
{
	int size = 0;
	cout << "输入数组的长度：";
	cin >> size;
	cout << endl;
	int* arr = new int[size];
	cout << "输入只含整数的数组：";
	for (int i = 0; i < size; i++)
	{
		cin >> *(arr + i);
	}
	cout << endl;

	cout << "排序前的数组为：";
	for (int i = 0; i < size; i++)
	{
		cout << *(arr + i) << " ";
	}

	cout << endl;

	change(arr, size);
	cout << "排序后的数组为：";
	for (int i = 0; i < size; i++)
	{
		cout << *(arr + i) << " ";
	}
 delete[]arr;
}
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
	cout << "��������ĳ��ȣ�";
	cin >> size;
	cout << endl;
	int* arr = new int[size];
	cout << "����ֻ�����������飺";
	for (int i = 0; i < size; i++)
	{
		cin >> *(arr + i);
	}
	cout << endl;

	cout << "����ǰ������Ϊ��";
	for (int i = 0; i < size; i++)
	{
		cout << *(arr + i) << " ";
	}

	cout << endl;

	change(arr, size);
	cout << "����������Ϊ��";
	for (int i = 0; i < size; i++)
	{
		cout << *(arr + i) << " ";
	}
 delete[]arr;
}
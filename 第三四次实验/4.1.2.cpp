//#include<iostream>
//using namespace std;
//void bubblesort(double arr[])
//{
//	for (int i = 0; i < 10-1; i++)
//	{
//		for (int j = 0; j < 10 - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				double temp = 0;
//				temp = arr[j + 1];
//				arr[j + 1] = arr[j];
//				arr[j] = temp;
//			}
//		}
//	}
//}
//int main()
//{
//	double arr[10] = { 0 };
//	cout << "输入10个双精度数字" << endl;
//	for (int i = 0; i < 10; i++)
//	{
//		cin >> arr[i];
//	}
//
//	cout << "排序前：";
//	for (int i = 0; i < 10; i++)
//	{
//		cout << arr[i] << "\t";
//	}
//
//	cout << endl;
//
//	bubblesort(arr);
//	cout << "排序后：";
//	for (int i = 0; i < 10; i++)
//	{
//		cout<< arr[i] << "\t";
//	}
//	return 0;
//}
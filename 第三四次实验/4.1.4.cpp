//#include<iostream>
//using namespace std;
//void change(int size1, int arr1[],int size2, int arr2[],int arr3[])
//{
//	int size3 = 0;
//	size3 = size1 + size2;
//	for(int i=size3;i>0;)
//	{
//		if (arr1[size1 - 1] > arr2[size2 - 1]) 
//		{
//			arr3[i - 1] = arr1[size1 - 1];
//			size1--;
//			i--;
//		}
//		else {
//			arr3[i - 1] = arr2[size2 - 1];
//			size2--;
//			i--;
//		}
//	}
//}
//
//int main()
//{
//	cout << "输入第一个数组的长度:";
//	int size1 = 0;
//	cin >> size1;
//	int* arr1 = new int[size1];
//	cout << "输入第一个排列好的数组" << endl;
//	for (int i = 0; i < size1; i++)
//	{
//		cin >> arr1[i];
//	}
//
//    cout << "输入第二个数组的长度:";
//	int size2 = 0;
//	cin >> size2;
//	int* arr2 = new int[size2];
//	cout << "输入第二个排列好的数组" << endl;
//	for (int i = 0; i < size2; i++)
//	{
//		cin >> arr2[i];
//	}
//	int size3 = 0;
//	size3 = size1 + size2;
//	int* arr3 = new int[size3];
//
//	change(size1, arr1, size2, arr2, arr3);
//
//	for (int i = 0; i < size3; i++)
//	{
//		cout << arr3[i] << " ";
//	}
//	return 0;
//}
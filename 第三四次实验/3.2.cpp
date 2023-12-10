//#include<iostream>
//using namespace std;
//bool is_prime(int num)
//{
//	if (num == 2)
//	{
//		return true;
//	}
//	else {
//		int temp = 0;
//		for (int i = 2; i < num; i++)
//		{
//			if (num % i == 0)
//			{
//				temp = false;
//				break;
//			}
//			else
//			{
//				temp = true;
//			}
//		}
//		return temp;
//	}
//	
//}
//int main()
//{
//	int nummax = 200;
//	int col = 1;
//	for (int num = 2; num < nummax; num++)
//	{
//		
//		if (is_prime(num) == true)
//		{
//			cout << num << "\t";
//			col ++;
//			if ((col - 1) % 10 == 0)
//			{
//				cout << "\n";
//			}
//		}	
//	}
//	return 0;
//}
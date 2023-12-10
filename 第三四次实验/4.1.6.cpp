//#include <iostream>
//using namespace std;
//
//const int num1 = 26;   
//
//void count(const char list[],const int length, int counts[])
//{
//	for (int i = 0; i< length; i++)
//	{
//		if ('a' <=list[i] && list[i] <='z')
//		{
//			counts[list[i] - 'a']++;
//		}
//		else
//		{
//			counts[list[i] - 'A']++;
//		}
//	}
//}
//void print(const int counts[])
//{
//	for (int i = 0; i < num1; i++) {
//		if (counts[i] != 0)
//		{
//			cout << static_cast<char>(i + 'a') << " : " << counts[i] << "  times " << endl;
//		}
//	}
//}
//
//int main()
//{
//	char list[999];
//	int counts[num1] = { 0 };
//	cout << "ÊäÈëÖ»º¬×ÖÄ¸µÄ×Ö·û´®: ";
//	cin.getline(list, 999);
//	const int length = strlen(list);
//	count(list,length, counts);
//	print(counts);
//
//	return 0;
//}
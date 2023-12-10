//#include<iostream>
//using namespace std;
//#include<cmath>
//int parseHex(const char* const hexString)
//{
//	int num = 0;
//	const int length = strlen(hexString);
//	int dnum = 0;
//	for (int i = 0; i < length; i++)
//	{
//		if (hexString[i] >= 'A' && hexString[i] <= 'F')
//		{
//			dnum = (static_cast<int>(hexString[i]) - 55) * (pow(16, length - 1 - i));
//		}
//		else
//		{
//			dnum = (hexString[i] - 48) * pow(16, length - i - 1);
//		}
//		num += dnum;
//	}
//	return num;
//}
//
//int main()
//{
//	char hexstring[999];
//	cout << "输入一个十六进制数"<<endl;
//	cin.getline(hexstring, 999);
//	cout << "十六进制数" << " "<<hexstring<<" " << "对应的十进制数为：" << parseHex(hexstring);
//	return 0;
//}
//#include<iostream>
//using namespace std;
//int gcd(int a, int b)
//{
//	int temp = b;
//	for (;a % b;)
//	{
//		temp = a % b;
//		a = b;
//		b = temp;
//	}
//	return temp;
//}
//
//int lcm(int gcd,int a,int b)
//{
//	return( a * b )/ gcd;
//}
//int main()
//{
//	int x = 0, y = 0;
//	cout << "������x,y" << endl;
//	cin >> x >> y;
//	cout <<"���Լ��Ϊ" << gcd(x,y) << endl;
//	const int& z = gcd(x, y);
//	cout << "��С������Ϊ" << lcm(z, x, y) << endl;
//	return 0;
//}
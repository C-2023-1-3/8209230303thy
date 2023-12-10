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
//	cout << "请输入x,y" << endl;
//	cin >> x >> y;
//	cout <<"最大公约数为" << gcd(x,y) << endl;
//	const int& z = gcd(x, y);
//	cout << "最小公倍数为" << lcm(z, x, y) << endl;
//	return 0;
//}
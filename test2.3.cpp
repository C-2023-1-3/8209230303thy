#include<iostream>
using namespace std;
int main()
{
	while (1)
	{
		float a, b, c = 0;
		cout << "请输入三角形的三边" << endl;
		cin >> a >> b >> c;
		if (a + b > c && a + c > b && b + c > a)
		{
			if (a == b || a == c || b == c)
			{
				cout << "是等腰三角形" << ",周长为：" << a + b + c << endl;
			}
			else
			{
				cout << "不是等腰三角形" << ",周长为：" << a + b + c << endl;
			}
		}
		else
		{
			cout << "不是三角形" << endl;
		}
	}
		return 0;	
}

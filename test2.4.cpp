#include<iostream>
using namespace std;
int main()
{
	float x = 0, y = 0;
	char sign ;
	while (1)
	{
		cin >> x >> sign >> y;
		switch (sign)
		{
		case '+':
			cout <<"x + y="<<x+y << endl;
			break;
		case '-':
			cout << "x - y=" <<x-y<< endl;
			break;
		case '*':
			cout <<" x * y="<<x*y << endl;
			break;
		case '/':
			if (y == 0)
			{
				cout << "除数不能为0" << endl;
			}
			else
			{
				cout << "x / y=" << x / y << endl;
			}			
			break;
		case'%':
			if (x - int(x) == 0 && y - int(y) == 0)
			{
				cout <<"x % y="<< int(x) % int(y) << endl;
			}
			else
			{
				cout << "小数不能取余" << endl;
			}
			break;
		default:
			cout << "运算符不合法" << endl;
			break;
		}
	}	
	return 0;
}
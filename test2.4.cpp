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
				cout << "��������Ϊ0" << endl;
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
				cout << "С������ȡ��" << endl;
			}
			break;
		default:
			cout << "��������Ϸ�" << endl;
			break;
		}
	}	
	return 0;
}
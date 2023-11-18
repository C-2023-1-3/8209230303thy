#include<iostream>
using namespace std;
int main()
{
	int a=0, b=0, c=0, d=0, min=0, max = 0;
	cin >> a >> b;
	max = (a >= b ? a : b); min = (a <= b ? a : b);
	while (1)
	{
		if (a % min == 0 && b % min == 0)
		{
			c = min;
			break;
		}
		min--;
	}

	while (1)
	{
		if (max % a == 0 && max % b == 0)
		{
			d = max;
			break;
		}
		max++;
	}		
	cout << "最大公约数为：" << c << "\t" << "最小公倍数为：" << d << endl;
	return 0;
}
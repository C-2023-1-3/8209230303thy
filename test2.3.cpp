#include<iostream>
using namespace std;
int main()
{
	while (1)
	{
		float a, b, c = 0;
		cout << "�����������ε�����" << endl;
		cin >> a >> b >> c;
		if (a + b > c && a + c > b && b + c > a)
		{
			if (a == b || a == c || b == c)
			{
				cout << "�ǵ���������" << ",�ܳ�Ϊ��" << a + b + c << endl;
			}
			else
			{
				cout << "���ǵ���������" << ",�ܳ�Ϊ��" << a + b + c << endl;
			}
		}
		else
		{
			cout << "����������" << endl;
		}
	}
		return 0;	
}

#include<iostream>
using namespace std;
#include<cmath>
int main()
{
	float price = 0.8;
	int num = 2;
	int day = 1;
	int sum = 2;
	for ( day ; num*2 < 100; )
	{
		day++;
		num = pow(2, day);	
		sum = sum + num;
	}	
	cout << "ÿ��ƽ����" << sum * price / day <<"Ԫ"<< endl;	
	return 0;
}
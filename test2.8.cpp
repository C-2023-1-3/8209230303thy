#include<iostream>
using namespace std;
void pfg(float a, float x,float result )
	{
		
		result = a;
		while (abs(result - x) > 1e-5)
		{
			x = result;
			result = 0.5 * (x + a / x);
		}
		cout << "结果为：" << result << endl;
	}
	


int main()
{
	cout << "请输入a" << endl;
	float a = 0, x = 0, result = 0;
	cin >> a;
	pfg(a, x, result);
	return 0;
}
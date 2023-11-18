#include<iostream>
using namespace std;
#define pi 3.14
int main()
{
    float h = 0, r = 0;
	cout << "输入圆锥的半径r、锥高h" << endl;
	cin >> r >> h;
	float v = 0, s = 0;
	s = pi * r * r;
	v = s * h/3;
	cout << "圆锥的体积为："<< v << endl;
}
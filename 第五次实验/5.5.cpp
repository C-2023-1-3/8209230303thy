#include<iostream>
using namespace std;
class Point {
public:
	int m_x;
	int m_y;
	Point() :m_x(60), m_y(80) {

	}

	void setpoint(int i,int j)
	{
		m_x = m_x + i;
		m_y = m_y + j;
	}

	void display()
	{
		cout << "×ø±êÎª£º" << "(" << m_x << "," << m_y << ")" << endl;
	}
};

int main()
{
	Point p;
	p.setpoint(2, 3);
	p.display();
	return 0;
}
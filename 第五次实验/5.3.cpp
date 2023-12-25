#include<iostream>
using namespace std;
#include<string>

class Cube {
private:
	int m_l;
	int m_w;
	int m_h;
public:
	void Setlength()
	{
		int length;
		cout << "输入长" << endl;
		cin >> length;
		m_l = length;
	}

	void Setwidth()
	{
		int width;
		cout << "输入宽" << endl;
		cin >> width;
		m_w = width;
	}

	void Setheight()
	{
		int height;
		cout << "输入高" << endl;
		cin >> height;
		m_h = height;
	}

	int volum()
	{
		return m_l * m_w * m_h;
	}

	void display()
	{
		cout << "体积为" << volum() << endl;
	}
};

int main()
{
	Cube c1;
	c1.Setlength();
	c1.Setwidth();
	c1.Setheight();
	c1.display();

	Cube c2;
	c2.Setlength();
	c2.Setwidth();
	c2.Setheight();
	c2.display();

	Cube c3;
	c3.Setlength();
	c3.Setwidth();
	c3.Setheight();
	c3.display();

	return 0;
}


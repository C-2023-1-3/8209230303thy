#include<iostream>
using namespace std;
class Time          // 定义time类
{
private:             
	int m_hour;
	int m_minute;
	int m_sec;

public:
	void sethour()
	{
		int hour;
		cin >> hour;
		m_hour = hour;
	}

	int gethour()
	{
		return m_hour;
	}

	void setminu()
	{
		int minute;
		cin >> minute;
		m_minute = minute;
	}

	int getminu()
	{
		return m_minute;
	}

	void setsec()
	{
		int sec;
		cin >> sec;
		m_sec = sec;
	}

	int getsec()
	{
		return m_sec;
	}
};

int main()
{
	Time t1;
	cout << "输入小时" << endl;
	t1.sethour();
	cout << "输入分钟" << endl;
	t1.setminu();
	cout << "输入秒" << endl;
	t1.setsec();
	cout << t1.gethour() << ":" << t1.getminu() << ":" << t1.getsec() << endl;
	return 0;
}

#include<iostream>
using namespace std;
#include<string>

class Student {
public:
	int m_id;
	int m_score;
	Student(int id, int score) :m_id(id), m_score(score)
	{

	}

};

int max(Student stu[])
{
	Student s(0,0);
	Student* p = stu;
	for (int i = 0; i < 5; i++)
	{
		if (s.m_score < p[i].m_score)
		{
			s.m_score = p[i].m_score;
			s.m_id = p[i].m_id;
		}
	}
	return s.m_id;
}

int main()
{
	Student stu[5] = {
		Student(315,91),
		Student(1351,56),
		Student(153,89),
		Student(34,88),
		Student(33,78)
	};
	cout << "成绩最高的学生学号为：" << max(stu) << endl;
	return 0;
}


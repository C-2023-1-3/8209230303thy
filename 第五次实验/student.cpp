#include <iostream>
#include"student.h"    
using namespace std;
void Student::display()     
{
    cout << "num:" << getnum() << endl;
    cout << "name:" << getname() << endl;
    cout << "sex:" << getsex() << endl;
}

void Student::setvalue()
{
    string tnum;
    string tname;
    string tsex;
    cout << "����ѧ��" << endl;
    cin >> tnum;
    cout << "��������" << endl;
    cin >> tname;
    cout << "�����Ա�" << endl;
    cin >> tsex;
    num = tnum;
    name = tname;
    sex = tsex;
}

string Student::getnum()
{
    return num;
}

string Student::getname()
{
    return name;
}

string Student::getsex()
{
    return sex;
}

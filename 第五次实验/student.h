#pragma once
#include<iostream>
using namespace std;
class Student            
{
public:                   
	void display();
	void setvalue();
	string getnum();
	string getname();
	string getsex();
private:
	string num;
	string name;
	string sex;
};


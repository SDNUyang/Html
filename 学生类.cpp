#include<iostream>
#include<stdlib.h>
#include<cmath>
#include<ctime>

#define RAND_MAX 2147483647
using namespace std;


class school
{
private:
	string name;
	string address;
public:
	school(string x,string aa)
	{
		this->name = x;
		this->address = aa;
	}
	void Disp()
	{
		cout << " ѧУ   ��    " << name << endl;
		cout << " ��ַ   ��    " << address << endl;
	}
};



class date
{
private:
	int year;
	int month;
	int day;
public:
	date(int x,int y,int z)
	{
		year = x;
		month = y;
		day = z;
	}
	int GetYear()
	{
		return year;
	}
	int GetMoth()
	{
		return month;
	}
	int GetDay()
	{
		return day;
	}
	void Disp()
	{
		cout << year << "-" << month << "-" << day << endl;
	}
};


class Student
{
private:

	school s;                     //ѧУ��Ա��
	date a;                       //���ڳ�Ա��
	string name;
	string sex;
	string id;
	double GDA;
	
public:
	static int total;
	Student(string s,string add,int year,int month,int day,string na,string se,string i,double GD) :s(s,add), a(year, month, day)
	{
		this->name = na;
		this->sex = se;
		this->id = i;
		this->GDA = GD;
		total++;
	}
	void DispInf(Student &A)const
	{
		cout << "****************������Ϣ****************"<<endl;
		cout << " ����   ��  " << A.name << endl;
		int age,ThisYear=2019;
		age = ThisYear - A.a.GetYear();
		cout << " ����   ��" << "    " << age << endl;
		cout << " ѧ��   ��" << "  " << id << endl;
		cout << " ����   ��" << "  " << GDA << endl;

		cout << "�������ڣ�" << "  ";
		A.a.Disp();
		cout << "****************������Ϣ****************" << endl<<endl;
		cout << "****************ѧУ��Ϣ****************" << endl;
		A.s.Disp();
		cout << "****************ѧУ��Ϣ****************" << endl;
	}
	
};
int Student::total = 0;


/*................��������Ķ���������..............*/


int main()
{
	srand((double)time(0));
	double d=(rand() / RAND_MAX) % (4-0) + 0;
	Student A("SDNU","ɽ��ʡ�����г�������ѧ·һ�� ",2000,12,2,"ZhangSan","��","201811990127",d);
	Student B("SDNU","ɽ��ʡ�����г�������ѧ·һ�� ",2001,12,3,"WangWu","��","201811990139",d);
	A.DispInf(A);
	B.DispInf(B);

	cout <<"ѧ��������"<< Student::total << endl;

	system("pause");
}
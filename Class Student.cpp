#include<iostream>
#include<string.h>
using namespace std;
class Std
{
private:
	char* name;
	char id[10];
	int age;
	string adress;
public:
	Std();
	Std(char *r,char ID[10],int AGE,string ADRESS);
	Std(const Std& r);
	~Std();
	/*�����ǹ��캯������������*/
	void Get();
	void Change();
	void disply();
};
/*..........���к�����ʵ��.........*/
Std::Std()
{
	cout << "�޲ι��캯��������" << endl;
}
Std::Std(char* r, char ID[10], int AGE, string ADRESS)
{
	if (r != NULL)
	{
		int len = strlen(r);
		name = new char[len + 1];
		strcpy(name, r);
	}
	this->id[10] = ID[10];
	this->age = AGE;
	this->adress = ADRESS;
	cout << "�вι��캯��������" << endl;
}
Std::Std(const Std& r)
{
	cout << "�������캯��������" << endl;
	this->id[10] = r.id[10];
	this->age = r.age;
	this->adress = r.adress;
	if (r.name != NULL)
	{
		int len = strlen(r.name);
		this->name = new char[len + 1];
		strcpy(this->name, r.name);
	}
	cout << "�������캯��������" << endl;


}
Std::~Std()
{
	cout << "��������������" << endl;
	delete[] name;
}
//�����ǹ��캯��������������ʵ��
/*..............������д��ͨ����..................*/
void Std::Get()                            //��ȡѧ����Ϣ
{

}
void Std::Change()                       //�޸�ѧ����Ϣ
{

}
void Std::disply()
{
	cout << "ѧ��������" << name << endl;
	cout << "ѧ��ID��  " << id << endl;
	cout << " ѧ�����䣺 " << age << endl;
	cout << "ѧ��סַ��" << adress << endl;
}
int main()
{
	Std S;
	S.disply();

}
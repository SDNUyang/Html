#include<iostream>
#include<cstring>
using namespace std;
/*....................����һ��ѧ����....................*/
class Std
{
private:
	char* name;                   //Ҫ�����    
	string id;
	int age;
	string adress;
public:
	Std();                                          //�޲ι��캯��
	Std(char *name,string id,int age,string adress);       //�вι��캯��
	Std(const Std &r);                              //�������캯��
	~Std();                                         //��������
	/*�����ǹ��캯������������*/
	void Get();
	void Change();
	void Disply();
};
/*..........���к�����ʵ��.........*/
Std::Std()
{
	cout << "�޲ι��캯��������" << endl;
}
Std::Std(char* r, string i, int a, string ad)
{
	name = r;
	id = i;
	age = a;
	adress = ad;
	cout << "�вι��캯��������" << endl;
}
Std::Std(const Std &r)
{
	cout << "�������캯��������" << endl;
	this->id = r.id;                    //���ܣ�������
	this->age = r.age;
	this->adress = r.adress;
	if (r.name != NULL)
	{
		int len = strlen(r.name);
		this->name = new char[len + 1];
		strcpy(this->name, r.name);
	}
	else this->name = 0;
	cout << "�������캯��������" << endl;


}
Std::~Std()
{
	if(this->name)
	delete[] name;
	cout << "��������������" << endl;

}
//�����ǹ��캯��������������ʵ��
/*..............������д��ͨ����..................*/
void Std::Get()                            //��ȡѧ����Ϣ
{
	cout << "ѧ��������" << endl;
	cin >>this->name;
	cout << "ѧ��Id��";
	cin >> this->id;
	cout << "ѧ�����䣺";
	cin >> this->age;
	cout << "ѧ��סַ��";
	cin >> this->adress;
}
void Std::Change()                       //�޸�ѧ����Ϣ
{

}
void Std::Disply()
{
	cout << "ѧ��������" << name << endl;
	cout << "ѧ��ID: " << id << endl;
	cout << " ѧ�����䣺 " << age << endl;
	cout << "ѧ��סַ��" << adress << endl;
}
int main()
{
	char name[] = "Zhangsan";
	Std S1(name,"201811990127",18,"01");
	//S1.Get();
	S1.Disply();
}
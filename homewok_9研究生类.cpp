#include<iostream>
#include<cstring>
using namespace std;
class greaduate
{
private:
	char* name;
	bool genderl;
	char* id;
	string research;
	string tutor;
	double score;
public:
	static int total;//���еľ�̬���ݳ�Ա

	/*����һ��*/

	//greaduate() { total++; }

	greaduate(char* n, bool g,double sc, char *i, string r, string t);
	greaduate(const greaduate& g); 
	~greaduate();

	/*����һ��*/
	void Disply();
	void Disply()const;     //����Ա�������������ѧ��������Ϣ��
	friend void DisplyAverage(greaduate &,greaduate &);
	friend void DisplyRank(greaduate &);
};
int greaduate::total = 0;


/*
greaduate::greaduate()//�޲ι��캯��
{
	name = NULL;
	cout << "***�޲ι��캯��������***" << endl;
}

*/

greaduate::greaduate(char* n, bool g,double sc, char *i, string r, string t)//�вι��캯��
{
	if (n)
	{
		name = new char[strlen(n) + 1];
		strcpy(name, n);
	}
	if (i)
	{
		id = new char[strlen(i) + 1];
		strcpy(id, i);
	}
	score = sc;
	strcpy(id, i);
	research = r;
	tutor = t;
}
greaduate::~greaduate()//��������
{
	if (name)
		delete[]name;
}
void greaduate::Disply()
{
	cout << "*ѧ������*" <<"  " ;
	cout << name<<endl;
	cout << "*  �Ա�  *" << "  ";
	cout << genderl<<endl;
	cout << "*  ѧ��  *" << "  ";
	cout << id<<endl;
	cout << "*��ѧ�ɼ�*" << "  ";
	cout << score << endl;
	cout << "*�о�����*" << "  ";
	cout << research << endl;
	cout << "*  ��ʦ  *" << "  ";
	cout << tutor << endl;
}
void greaduate::Disply()const
{
	cout << "*ѧ������*" << "  ";
	cout << name << endl;
	cout << "* �Ա� *" << "  ";
	cout << genderl << endl;
	cout << "* ѧ�� *" << "  ";
	cout << id << endl;
	cout << "*��ѧ�ɼ�*" << "  ";
	cout << score << endl;
	cout << "*�о�����*" << "  ";
	cout << research << endl;
	cout << "* ��ʦ *" << "  ";
	cout << tutor << endl;
}

void DisplyAverage(greaduate&A,greaduate&B)    //���ƽ���ɼ�
{
	double sum, av;
	sum = A.score + B.score;
	av = sum / 2;
	cout << "*ƽ���ɼ�*" << av << endl;
}

void DisplyRank(greaduate &A)
{
	cout << "*  �ȼ�  *"<<"  ";
	if (A.score >=90.0)
		cout << "A" << endl;
	if (A.score < 90.0 && A.score >=80.0)
		cout << "B" << endl;
	if (A.score < 80.0 && A.score >= 70.0)
		cout << "C" << endl;
	if (A.score < 70.0 && A.score >= 60.0)
		cout << "D" << endl;
	if(A.score<60.0)
		cout << "E" << endl;
}
int main()
{
	char na[] = "Zhang",nb[]="Wang";
	char i[] = "201811990127",i2[]="201811990136";
	greaduate A(na,false,60,i,"�����","LiBai");
	greaduate B(nb, false, 90, i2, "�����", "�Ŵ���");
	A.Disply();
	DisplyRank(A);
	cout << endl << "************�˴��Ƿֽ���*************" << endl<<endl;
	B.Disply();

	DisplyRank(B);
	cout << "      " << endl;
	DisplyAverage(A, B);
	return 0;
}
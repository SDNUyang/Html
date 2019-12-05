#include<iostream>
#include<cmath>
using namespace std;
class Trangle
{
private:
	double a;
	double b;
	double c;
public:
	Trangle(double n=0,double m=0,double p=0)//�вι��캯��
	{
		a = n;
		b = m;
		c = p;

	}
	Trangle(const Trangle& r)//�������캯��
	{
		this->a=r.a;
		this->b = r.b;
		this->c = r.c;
	}
	~Trangle()//����������������������������Ҫ�������ĺ����壬��ֻ����û�к������ڳ������е�ʱ��ᱨ��
	{

	}


	double Area()//�������ε����
	{
		double p;//���ܳ�
		p = (a + b + c) / 2;
		double s;//���
		s = sqrt(p*(p-a)*(p-b)*(p-c));
		return s;
	}
	void Circulate()//���ܳ�
	{
		double l;
		l = a + b + c;
		cout << "�������ε��ܳ�Ϊ��" << l << endl;
	}




	Trangle operator+(Trangle &r)//���ء�+��
	{
	
		return ((this->Area()) + r.Area());
	}
	
	Trangle operator=(Trangle &r)
	{
		this->a = r.a;
		this->b = r.b;

		this->c = r.c;
	}
	
	friend ostream& operator<<(ostream& out,Trangle  &r)
	{
		out << r.a;
		out << r.b;
		out << r.c;
		return out;
	}
};





//������
int main()
{
	Trangle T(1, 2, 1);
	Trangle A(3, 4, 5);
	double s1 = T.Area();
	T.Circulate();
	cout << "������T�����Ϊ��" << s1 << endl ;



	Trangle B = T + A;
	double s2 = B.Area();
	//cout << s2 << endl;


	Trangle AA = T;//=���سɹ�
	AA.Circulate();
	cout << AA << endl;//<<���سɹ�
	return 0;
}
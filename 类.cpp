#include<iostream>
#include<cmath>
using namespace std;
class Triangle
{
private :
	int a;
	int b;
	int c;
public:
	/*���캯������ֵ�취
	Triangle(int x, int y, int z)
	{
		this->a = x;
		this->b = y;
		this->c = z;
	}
	*/
	int Judge();/*�ж��ܷ񹹳�������*/
	int Caculate_l();/*���������ε��ܳ�*/
	float Caculate_s();/*���������ε����*/
	void Judge_form();/*�ж������ε�����*/
	void SetDate(int,int ,int);/*��ʼ��*/
};
void Triangle::SetDate(int x, int y, int z)
{
	a = x;
	b = y;
	c = z;
}
int Max(int a, int b, int c)
{
	if (a > b&& a > c)
		return a;
	if (b > a&& b > c)
		return b;
	if (c > a&& c > b)
		return c;
}
int Triangle::Judge()
	{
	if (c >= a + b || a >= b + c || b >= a + c)
	{
		cout << "�������߲��ܹ��������Σ�" << endl;
		return 0;
	}
	else
	{
		cout << "�������߿��Թ���������" << endl;
		return 1;
	}
	}
int Triangle::Caculate_l()
{
	return a + b + c;
}
float Triangle::Caculate_s()
{
	float p,s;
	p = (a + b + c) / 2;
	s = sqrt(p * (p - a) * (p - b) * (p - c));
	return s;
}
void Triangle::Judge_form()
{
	int max;
	max = Max(a, b, c);
	if (max == a)
	{
		if (max * max > (b * b + c * c))
			cout << "��������Ϊ�۽�������" << endl;
		if (max * max < (b * b + c * c))
			cout << "��������Ϊ���������" << endl;
		if (max * max == (b * b + c * c))
			cout << "��������Ϊֱ��������" << endl;
	}
	if (max == b)
	{
		if (max * max > (a * a + c * c))
			cout << "��������Ϊ�۽�������" << endl;
		if (max * max < (a * a + c * c))
			cout << "��������Ϊ���������" << endl;
		if (max * max == (a * a + c * c))
			cout << "��������Ϊֱ��������" << endl;
	}
	if (max == c)
	{
		if (max * max > (a * a + b * b))
			cout << "��������Ϊ�۽�������" << endl;
		if (max * max < (a * a + b * b))
			cout << "��������Ϊ���������" << endl;
		if (max * max == (a * a + b* b))
			cout << "��������Ϊֱ��������" << endl;
	}
}
int main()
{
	Triangle A,B,*p,*j;
	int x,y, z;
	p = &A;
	j = &B;
	int l;
	float s;
	cout << "����A�ĵ�ַΪ��" << p << endl;
	cout << "����B�ĵ�ַΪ��" << j << endl;
	cout << "����A�Ĵ�СΪ��" << sizeof(A) << endl;
	cout << "������������a,b,c��ֵ��" << endl;
	cin >> x >> y >> z;
	A.SetDate(x,y,z);
	int J;
	J = A.Judge();
	{	if (J == 0)
			return 0;
		else 
		{
			cout << "�������ε��ܳ�Ϊ��";
			p = &A;
			(*p).SetDate(x, y, z);
			l = A.Caculate_l();
			cout << l << endl;
			cout << "�������ε����Ϊ��";
			(*p).SetDate(x, y, z);
			s = A.Caculate_s();
			cout << s << endl;
			(*p).SetDate(x, y, z);
			A.Judge_form();
			return 0;
		}
	}
	
}
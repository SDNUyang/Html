#include<iostream>
using namespace std;

//����Location��
class Location
{
private:
	double x;
	double y;
public:
	Location(double a,double b)
	{
		x = a;
		y = b;
		//cout << "Location ���캯�������ã�" << endl;
	}
	~Location()
	{
		
	}
	void moveX()
	{
		x++;

	}
	void moveY()
	{
		y++;
	}
	double Getx()
	{
		return x;
	}
	double Gety()
	{
		return y;
	}
			
		
	
};

//������Point��
class Point:public Location
{
public:
	Point(double a, double b) :Location(a, b)
	{

	}
	~Point()
	{

	}
	double GetX()
	{
		double X;
		X = Getx();
		return X;
	}
	double GetY()
	{
		double Y;
		Y = Gety();
		return Y;
	}
	
	
};

//������Circle��
class Circle :public Point
{
private:
	double r;
public:
	Circle(double a,double b,double c): Point(a,b)
	{
		r = c;
	}
	~Circle()
	{

	}

	void CreateCircle()
	{
		double a, b;
		a = GetX();
		b = GetY();
		cout << "����Բ�ı�׼����Ϊ��(X-" << a << ")*(X-" << a << ")" << "+(Y-" << b << ")*(Y-" << b << ")=" << r * r << endl;
	}
	void show()
	{
		double a = GetX();
		double b = GetY();
		cout << "Բ������Ϊ��(" << a << "," << b << ")" << endl;
		cout << "Բ�İ뾶Ϊ��" << r << endl;
	}
	void move()
	{
		moveX();
		moveY();
	}
};

//������ʵ��
int main()
{
	Circle C(1, 2, 3);
	C.show();//���Բ��Բ�ĺ�����
	C.CreateCircle();//����Բ�ı�׼����
	C.moveX();//�ƶ�X����
	C.moveY();//�ƶ�Y����


	cout << "*********Բ���ƶ�********" << endl;
	C.show();//����ƶ�����µ�Բ������
	C.CreateCircle();//����ƶ�����µ�Բ�ı�׼����



	//L.moveX();//�ƶ�X����λ��
	//L.moveY();//�ƶ�Y����λ��
	//double x = L.Getx();
	//double y = L.Gety();
	//cout << x << y << endl;
	system("pause");
}
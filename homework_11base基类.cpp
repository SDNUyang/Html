#include<iostream>
using namespace std;
//            ����һ������
class Base
{
public:
	int a;
	static int count;
	void print()
	{
		cout << "a=" << a << endl;
		cout << "b=" << b << endl;
		cout << "c=" << c << endl;
	}
	static int statistic()
	{
		count++;
		return count;
	}

protected:
	int b;
private:
	int c;
};

//������1
class pai1 :public Base
{


};

//������2
class pai2:protected Base
{

};

//������3
class pai3
{

};
int main()
{
	pai1 P;
	pai2 O;
	cout << "P�Ĵ�СΪ��" << sizeof(P) << endl;
	cout << "O�Ĵ�СΪ��" << sizeof(O) << endl;

	system("pause");
}
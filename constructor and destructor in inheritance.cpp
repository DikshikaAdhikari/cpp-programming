#include<iostream>
using namespace std;
class A
{
	public:
		A()
		{
			cout<<"constructor of base class a"<<endl;
		}
    ~A()
    {
	cout<<"destructor in class A"<<endl;
    }
};
class B
{
	public:
		B()
		{
			cout<<"constructor of b"<<endl;
		}
		~B()
		{
			cout<<"destructor of b"<<endl;
		}
};
class c:public A,B
{
	public:
		c()
		{
			cout<<"constructor of c"<<endl;
		}
		~c()
		{
			cout<<"destructor of c"<<endl;
		}
};
int main()
{
	c obj;
	return 0;
}

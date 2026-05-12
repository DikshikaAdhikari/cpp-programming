#include<iostream>
using namespace std;
class A
{
	public:
		int x;
		void getdata()
		{
            cout<<"enter the value of x";
            cin>>x;	
        }
};
class B
{
	public:
		int y;
		void getdata()
		{
			cout<<"enter the value of y";
			cin>>y;
		}
};
class c: public A, public B
{
	public:
		void sum()
		{
			cout<<"the sum is"<<x+y;
		}
};
int main()
{
	c obj;
	obj.A::getdata();
	obj.B::getdata();
	obj.sum();
	return 0;
	
	}


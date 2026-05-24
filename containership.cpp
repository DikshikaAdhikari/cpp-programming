#include<iostream>
using namespace std;
class manager
{
	public:
		void display()
		{
			cout<<"i am a maanger"<<endl;
		}
};
class employee
{
	manager m1;
	public:
		void print()
		{
			m1.display();
			cout<<"we are employee";
		}
};
int main()
{
	employee e1;
	e1.print();
	return 0;
}


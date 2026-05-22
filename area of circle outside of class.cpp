#include<iostream>
using namespace std;
class area
{
	public:
		int r,a,x;
		void getdata();
		void displayres();
};
void area::getdata()
{
	cout<<"enter radius of a circle";
	cin>>r;
}
void area::displayres()
{
	a=3.14*r*r;
	cout<<"the area of a circle is"<<a;
} 
int main()
{
	area x;
	x.getdata();
	x.displayres();
	return 0;
}

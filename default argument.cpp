#include<iostream>
using namespace std;
int pro(int a, int b, int c=0, int d=0)
{
	return(a*b*c*d);
}
int main()
{
	cout<<pro(2,3)<<endl;
		cout<<pro(2,3,4)<<endl;
			cout<<pro(2,3,4,5)<<endl;
			return 0;
}

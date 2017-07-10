#include<iostream>
using namespace std;
int n=3;
void f1()
{
    int	m=n;
	cout<<"m="<<m<<endl;
}
void f2()
{
	int s=1;
	n=s;
	cout<<"n="<<n<<endl;
}
void main()
{
	f1();
	f2();
	f1();
	getchar();
}
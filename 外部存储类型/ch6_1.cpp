#include<iostream>
using namespace std;
void fn1();
void fn2();
int n;
void main()
{
	n=3;
	fn1();
	cout << n <<endl;
}
void fn1()
{
	fn2();
}



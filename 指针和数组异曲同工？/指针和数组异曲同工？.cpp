#include<iostream>
using namespace std;
int *p;
void main()
{
	for(int i=0;i<10;i++)
	{
		p[i]=i;
	}
	cout<<"Êý×éPÎª";
	for( i=0;i<10;i++)
	{
		cout<<p[i]<<" ";
	}
	cout<<endl;
	system("pause");
}
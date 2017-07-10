#include<iostream>
#include<stdlib.h>
using namespace std;
void main()
{
int a[10]={5,6,5,7,3,2,1,8,9,4};
int min;
min=a[0];
for(i=1;i<10;i++)
{
	if(a[i]<min)
		min=a[i];
}
cout<<"min"=min<<endl<<"i"=i<<endl;
system"pause";
}


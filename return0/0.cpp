#include<iostream>
using namespace std;
int a=0;
int isstop()
{
	if(a>5)
	  return 1;
}
int main()
{	
a++;
isstop();
cout<<isstop()<<endl;
return 0;
a++;
isstop();
cout<<isstop()<<endl;
a++;
isstop();
cout<<isstop()<<endl;
a++;
isstop();
cout<<isstop()<<endl;
a++;
isstop();
cout<<isstop()<<endl;
a++;
isstop();
cout<<isstop()<<endl;
}

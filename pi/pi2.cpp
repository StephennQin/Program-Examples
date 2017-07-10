//直到最后一项的绝对值不大于10^-8.(之前的都是大于的)
#include<iostream>
#include<cmath>
#include<stdlib.h>
#include<iomanip>//不加.h代表在std下。
using namespace std;
int main()
{double s=0,q=1;
long i=1,sign=1;
while(fabs(q)>1e-8)//
{s+=q;
i=i+2;
q=1.0/i;
sign=sign*(-1);//     之前q=q*(-1);//这种错误在每次都是负的，因为i是正的
q=sign*q;}
s=s*4;
cout<<"the pi is "
			<<setiosflags(ios::fixed)// 为什么不能加std？
			<<setprecision(8)
			<<s<<endl;         //std::cout<<(double)s<<std::endl;
system("pause");                //放在return 0;的前面
return 0;
}
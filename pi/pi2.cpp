//ֱ�����һ��ľ���ֵ������10^-8.(֮ǰ�Ķ��Ǵ��ڵ�)
#include<iostream>
#include<cmath>
#include<stdlib.h>
#include<iomanip>//����.h������std�¡�
using namespace std;
int main()
{double s=0,q=1;
long i=1,sign=1;
while(fabs(q)>1e-8)//
{s+=q;
i=i+2;
q=1.0/i;
sign=sign*(-1);//     ֮ǰq=q*(-1);//���ִ�����ÿ�ζ��Ǹ��ģ���Ϊi������
q=sign*q;}
s=s*4;
cout<<"the pi is "
			<<setiosflags(ios::fixed)// Ϊʲô���ܼ�std��
			<<setprecision(8)
			<<s<<endl;         //std::cout<<(double)s<<std::endl;
system("pause");                //����return 0;��ǰ��
return 0;
}
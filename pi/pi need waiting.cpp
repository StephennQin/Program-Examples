//ֱ�����һ��ľ���ֵ������10^-8.(֮ǰ�Ķ��Ǵ��ڵ�)
#include<iostream>
#include<cmath>
#include<stdlib.h>
void main()
{double s=0,q=1;				     //long
long i;
for(i=2;fabs(q)>1e-8;i++)//Ҫ��֤��һ��q��������,fabs����
{s+=q;
	q=pow(-1,i-1)*(1.0/(2*i-1));	//pow����
}
s=s*4;
std::cout<<s<<std::endl;
system("pause");
}
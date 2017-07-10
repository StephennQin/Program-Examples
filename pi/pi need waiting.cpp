//直到最后一项的绝对值不大于10^-8.(之前的都是大于的)
#include<iostream>
#include<cmath>
#include<stdlib.h>
void main()
{double s=0,q=1;				     //long
long i;
for(i=2;fabs(q)>1e-8;i++)//要保证第一个q满足条件,fabs浮点
{s+=q;
	q=pow(-1,i-1)*(1.0/(2*i-1));	//pow函数
}
s=s*4;
std::cout<<s<<std::endl;
system("pause");
}
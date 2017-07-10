#include<iostream>
using namespace std;
void main()
{
int *a=new int (3);//new运算是和指针联系的，将开辟的内存首地址值返回指针a；
int *b;
b=new int (4);

int *p=new int [100];// 动态分配了具有100个双精度实型数组元素的数组，同时将各存储区的首地址指针返回给指针变量p2
delete []p;
delete a;//当把a删除后，a的值就变成了随机值

char *q=new char('a');//单个字符不能用" "。
cout<<*a<<endl
<<*q<<endl
<<*b<<endl;
system("pause");
}
#include<iostream>
using namespace std;
void main()
{
int *a=new int (3);//new�����Ǻ�ָ����ϵ�ģ������ٵ��ڴ��׵�ֵַ����ָ��a��
int *b;
b=new int (4);

int *p=new int [100];// ��̬�����˾���100��˫����ʵ������Ԫ�ص����飬ͬʱ�����洢�����׵�ַָ�뷵�ظ�ָ�����p2
delete []p;
delete a;//����aɾ����a��ֵ�ͱ�������ֵ

char *q=new char('a');//�����ַ�������" "��
cout<<*a<<endl
<<*q<<endl
<<*b<<endl;
system("pause");
}
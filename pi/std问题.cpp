#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
cout << 12345.0 << endl;//���12345
//cout <<fixed << setprecision(2) << 123.456 << endl;/*��������λ�þͼ���fixed�Ļ�����������ȫ��������fixed����*/
cout << setprecision(4)<< 3.1415926 << endl;//����Ľ����3.142
cout << setprecision(3) << 12345.0 << endl;//����Ľ���� "1.23e+004 "
cout << fixed << setprecision(2) << 123.456 <<endl;//����Ľ����123.46��Ҫ������������
cout << showpoint << 12345.0 <<endl;//���12345.0
getchar();
}
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
cout << 12345.0 << endl;//输出12345
//cout <<fixed << setprecision(2) << 123.456 << endl;/*如果在这个位置就加上fixed的话，后面的输出全部都按照fixed处理*/
cout << setprecision(4)<< 3.1415926 << endl;//输出的结果是3.142
cout << setprecision(3) << 12345.0 << endl;//输出的结果是 "1.23e+004 "
cout << fixed << setprecision(2) << 123.456 <<endl;//输出的结果是123.46，要进行四舍五入
cout << showpoint << 12345.0 <<endl;//输出12345.0
getchar();
}
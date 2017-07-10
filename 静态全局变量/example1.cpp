//Example1              另一个例子在example2文件夹中
#include "heh.h"
#include <iostream>
using namespace std;
int main()
{
	n=20;  //为n赋初值
	printf("%d\n",n);//输出n的值
	fn();  //调用fn函数
	return 0;
}


// 全局变量与全局静态变量的区别： 
// 	(a）若程序由一个源文件构成时，没有区别。 
// 	(b)若程序由多个源文件构成时不同：全局静态变量使得该变量成为定义该变量的源文件所独享
// 	(c)具有外部链接的静态；可以在所有源文件里调用；除了本文件，其他文件可以通过extern的方式引用；

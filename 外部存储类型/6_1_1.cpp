/*
#include<iostream>
int a;               //不需要说明，连接器就能将两个文件连接在一起编译
void fn2()
{
	a=8;
	std::cout << "a= " << a << std::endl;    //需要用到cout，所以需要带上#include<iostream>

}
*/
  


///*
extern int n;      //extern表示n由另一个源文件定义
void fn2()
{
	n=8;
}
//*/
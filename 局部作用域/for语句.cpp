#include<iostream>
using namespace std;
void fn()
{
	int number;
	for(int i = 0; i < 10; i ++)     //for的第一个表达式可以提到for的前面，所以它的作用域比较大一些。
	{
		int hN;                    
		if(i % 2)
			number += 1;
	}
/*
	int i = 0;                    //表达式1
	while(i < 10)                 //表达式2
	{
		int hN;                   
		if(i % 2)
			number += 1;         //循环体
		i++;					//表达式3
	}
*/
	//hN = number / 2;
	number = i;                  
	cout << number <<endl;
}
void main()
{
	fn();
}
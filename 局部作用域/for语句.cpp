#include<iostream>
using namespace std;
void fn()
{
	int number;
	for(int i = 0; i < 10; i ++)     //for�ĵ�һ�����ʽ�����ᵽfor��ǰ�棬��������������Ƚϴ�һЩ��
	{
		int hN;                    
		if(i % 2)
			number += 1;
	}
/*
	int i = 0;                    //���ʽ1
	while(i < 10)                 //���ʽ2
	{
		int hN;                   
		if(i % 2)
			number += 1;         //ѭ����
		i++;					//���ʽ3
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
#include<iostream>      
using namespace std;
void main()
{
	int x[6]={1,2,3,4,5,6};
	int min=INT_MAX;        //����Сֵ��Ϊint������ֵ������      min=x[0],if (x[i]<min)��Ϊif (x[i]<=min)
	int index;
	for (int i=0;i<6;i++)
	{
		if (x[i]<min)
		{
			min=x[i];
			index=i;

		}
	}
	cout<<"��Сֵ��"<<min<<endl
	<<"index="<<index<<endl;
}
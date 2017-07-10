#include<iostream>      
using namespace std;
void main()
{
	int x[6]={1,2,3,4,5,6};
	int min=INT_MAX;        //把最小值赋为int里的最大值，或者      min=x[0],if (x[i]<min)改为if (x[i]<=min)
	int index;
	for (int i=0;i<6;i++)
	{
		if (x[i]<min)
		{
			min=x[i];
			index=i;

		}
	}
	cout<<"最小值是"<<min<<endl
	<<"index="<<index<<endl;
}
#include<iostream>
using namespace std;
void main()
{
	int N[6][2]=
	{
		{1,2},
		{1,3},
		{1,4},
		{2,3},
		{2,4},
		{3,4}
	};
	int T[3][2]=
	{
		{1,2},
		{2,3},
		{3,4}
	};
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<6;j++)
			if ((N[j][0]==T[i][0])&&(N[j][1]==T[i][1]))
			{
				N[j][0]=0;
				N[j][1]=0;
			}
	}
	for (int i=0;i<6;i++)
	{
		for (int j=0;j<2;j++)
		{
			cout<<N[i][j]<<"   ";
		}
		cout<<endl;
	}
	system("pause");
}
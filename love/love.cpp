#include<iostream>
#include <ctime>
#include <conio.h>
#include <cmath>
#include<iostream.h>
#include<windows.h>
#include<time.h>
#include<stdlib.h>
#include<conio.h>
#define N 21
using namespace std;
void gotoxy(int x,int y)//λ�ú���
{
COORD pos;
pos.X=2*x;
pos.Y=y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
}
void color(int a)//��ɫ����
{
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),a);
}
void init(int apple[2])//��ʼ����������ʼ��Χǽ����ʾ��Ϣ��ƻ����
{
int i,j;//��ʼ��Χǽ
int wall[N+2][N+2]={{0}};
for(i=1;i<=N;i++)
{
for(j=1;j<=N;j++)
wall[i][j]=1;
}
color(11);
for(i=0;i<N+2;i++)
{
for(j=0;j<N+2;j++)
{
if(wall[i][j])
cout<<"��";
else cout<<"��" ;
}
cout<<endl;
}
gotoxy(N+3,1);//��ʾ��Ϣ
color(20);
cout<<"�� W S A D �ƶ�����"<<endl;
gotoxy(N+3,2);
color(20);
cout<<"���������ͣ"<<endl;
gotoxy(N+3,3);
color(20);
cout<<"�÷֣�"<<endl;
apple[0]=rand()%N+1;//ƻ��
apple[1]=rand()%N+1;
gotoxy(apple[0],apple[1]);
color(12);
cout<<"��"<<endl;
}
void Delay(int time)//time*1000Ϊ���� 
{ 
clock_t   now   =   clock(); 

while(   clock()   -   now   <   time   ); 
} 
void main()
{int a;
cout<<"May I love you? press 1 for yes,0 for no"<<endl;
cin>>a;
if(a=1)
{cout<<"Why did you so easily agree "<<endl;
Delay(2000); 
cout<<"May I love you? press 1 for yes,0 for no";
cout<<"              *            *                   "<<endl;
 cout<<"            *    *     *    *                  "<<endl;
 cout<<"          *         *          *               "<<endl;
 cout<<"         *                       *             "<<endl;
 cout<<"         *                       *             "<<endl;
 cout<<"            *                 *                "<<endl;
 cout<<"               *           *                   "<<endl;
 cout<<"                 *       *                     "<<endl;
 cout<<"                    * *                        "<<endl;
 cout<<endl;
 cout<<"              *            *                   "<<endl;
 cout<<"            *    *     *    *                  "<<endl;
 cout<<"          *         *          *               "<<endl;
 cout<<"         *                       *             "<<endl;
 cout<<"         *                       *             "<<endl;
 cout<<"            *                 *                "<<endl;
 cout<<"               *           *                   "<<endl;
 cout<<"                 *       *                     "<<endl;
 cout<<"                    * *                        "<<endl;
}
else
if(a=0)
cout<<"ni wei shen me zhe me hen!";
printf("%c\n",01);//Ц��
printf("%c\n",02);//����
}
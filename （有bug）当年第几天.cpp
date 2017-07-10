//输入年月日计算该日是当年第几天
#include<iostream>
using namespace std;
struct Data
{
int year;
int month;
int day;
};
int main(void)
{
Data data;
int sumDay;
int calDays(int year,int month ,int day);
Data * p=&data;
cout<<"Please enter the year:";
cin>>p->year;
cout<<"Please enter the month:";
cin>>p->month;
cout<<"Please enter the day:";
cin>>p->day;
sumDay=calDays(p->year,p->year,p->year);
cout<<p->day<<'/'<<p->month<<'/'<<p->year<<" is "<<sumDay<<"th day of "<<data.year<<endl;
return 0;
}
int calDay(int year,int month,int day)
{
char sign;
int i,sumDay;
int daysOfMon1[12]={31,28,31,30,31,30,31,31,30,31,30,31};//闰年
int daysOfMon2[12]={31,29,31,30,31,30,31,31,30,31,30,31};//平年
sumDay=0;
if((year%4)==0 && (year%100)!=0 || (year%400)==0)
for(i=0;i<month-1;i++)
sumDay+=daysOfMon1[i];
else 
for(i=0;i<month-1;i++)
sumDay+=daysOfMon2[i];
sumDay+=day;
return sumDay;
}

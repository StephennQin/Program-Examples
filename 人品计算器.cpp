#include<stdio.h>
#include<math.h>
int main()
{
char str[20],i;
  int x,y;
printf("������������֣�����Ϊһ��:\n");
for( ;gets(str);)
	{	x=0;
	for(i=0;str[i];i++)
{		x+=str[i];
	}
	y=100*fabs(sin(x));
 printf("�����Ʒֵ��:%d\n\a",y);
switch(y/10)
{ case 0:
case 1:
case 2:printf("���˰ɣ������Ʒûʲô��˵��\n\a");break;
case 3:
case 4:printf("�����Ʒ�ܲҪ�úõ�Լ���Լ�\n\a");break;
case 5:
case 6:printf("�����Ʒ����ǿǿ��Ҫ�Լ�����Ϊ֮\n\a");break;
case 7:
case 8:printf("�����Ʒ����Ӧ�����Ǻ��˰�\n\a");break;
case 9:printf("ร������Ʒ��ã��ٽ�����\n\a");break;
return 0;
}}}

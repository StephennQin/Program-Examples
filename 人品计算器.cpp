#include<stdio.h>
#include<math.h>
int main()
{
char str[20],i;
  int x,y;
printf("请输入你的名字，满分为一百:\n");
for( ;gets(str);)
	{	x=0;
	for(i=0;str[i];i++)
{		x+=str[i];
	}
	y=100*fabs(sin(x));
 printf("你的人品值是:%d\n\a",y);
switch(y/10)
{ case 0:
case 1:
case 2:printf("算了吧，你的人品没什么好说的\n\a");break;
case 3:
case 4:printf("你的人品很差，要好好地约束自己\n\a");break;
case 5:
case 6:printf("你的人品勉勉强强，要自己好自为之\n\a");break;
case 7:
case 8:printf("你的人品不错，应该算是好人吧\n\a");break;
case 9:printf("喔，你的人品真好，再接再厉\n\a");break;
return 0;
}}}

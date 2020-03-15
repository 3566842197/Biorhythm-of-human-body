#include<stdio.h>
#include<iostream>
int main()
{
	printf("请依次输入测定年份、出生年份、测定年份的月、测定年份的日、出生年份的月、出生年份的日\n");
	int a,b,c=0,p,q,i,g,h,j,k;
	scanf("%d%d%d%d%d%d",&a,&b,&p,&q,&j,&k);
    if(b>a)
    {
        i=b;
        b=a;
        a=i;
    }
    for(i=b;i<=a;i++)
        if((i%400==0)||(i%4==0&&i%100!=0))
        {
            c ++;
        } 
		if(a%4==0&&a%100!=0||a%400==0)     //判断是否为闰年
			{switch(p){
			case 1:g=q;break;
			case 2:g=q+31;break;
			case 3:g=q+60;break;
			case 4:g=q+91;break;
			case 5:g=q+121;break;
			case 6:g=q+152;break;
			case 7:g=q+182;break;
			case 8:g=q+213;break;
			case 9:g=q+244;break;
			case 10:g=q+274;break;
			case 11:g=q+305;break;
			case 12:g=q+335;break;
		}}
		else
			{switch(p){
			case 1:g=q;break;
			case 2:g=q+31;break;
			case 3:g=q+59;break;
			case 4:g=q+90;break;
			case 5:g=q+120;break;
			case 6:g=q+151;break;
			case 7:g=q+181;break;
			case 8:g=q+212;break;
			case 9:g=q+243;break;
			case 10:g=q+273;break;
			case 11:g=q+304;break;
			case 12:g=q+334;break;
		}}
		if(b%4==0&&a%100!=0||b%400==0)
			{switch(j){
			case 1:h=k;break;
			case 2:h=k+31;break;
			case 3:h=k+60;break;
			case 4:h=k+91;break;
			case 5:h=k+121;break;
			case 6:h=k+152;break;
			case 7:h=k+182;break;
			case 8:h=k+213;break;
			case 9:h=k+244;break;
			case 10:h=k+274;break;
			case 11:h=k+305;break;
			case 12:h=k+335;break;
		}}
		else
			{switch(j){
			case 1:h=k;break;
			case 2:h=k+31;break;
			case 3:h=k+59;break;
			case 4:h=k+90;break;
			case 5:h=k+120;break;
			case 6:h=k+151;break;
			case 7:h=k+181;break;
			case 8:h=k+212;break;
			case 9:h=k+243;break;
			case 10:h=k+273;break;
			case 11:h=k+304;break;
			case 12:h=k+334;break;
		}}




	
	
	int w,x,y,z;
	w=(a-b)*365+c-h+g;
	printf("这是经历的总天数为%d天\n",w);
	x=w%23;
	y=w%28;
	z=w%33;
	if(x==0)
	{
		printf("你的体力恰好处于周期日\n");
	}
	if(x<12)
	{	
		printf("你的体力处于高潮期的第%d天\n",x);
	}
	if(x==12)
	{	
		printf("你的体力刚好处于临界期\n");
	}
	if(x>12)
	{	
		printf("你的体力处于低潮期的第%d天\n",x);
	}
	if(y==0)
	{	
		printf("你的情绪恰好是周期日\n");
	}
	if(y<14)
	{	
		printf("你的情绪正处于高潮期的第%d天\n",y);
	}
	if(y==14)
	{	
		printf("你的情绪恰好是临界日\n");
	}
	if(y>14)
	{	
		printf("你的情绪处于低潮期的第%d天\n",y);
	}
	if(z==0)
	{	
		printf("你的智力刚好是周期日\n");
	}
	if(z<17)
	{	
		printf("你的智力处于高潮期的第%d天\n",z);
	}
	if(z==17)
	{	
		printf("你的智力正处于临界日\n");
	}
	if(z>17)
	{	
		printf("你的智力处于低潮期的第%d天\n",z);
	}
	printf("这就是你的目前的生物节律\n");
	system("pause");
}
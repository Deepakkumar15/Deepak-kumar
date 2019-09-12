// programme for exchanging last two digits
#include<stdio.h>
void main()
{	int a,b,c,d,e,r;
	printf("enter any value:");
	scanf("%d",&a);
	b=a/100;
	c=a%10;
	d=a/10;
	e=d%10;
	r=(b*100)+(c*10)+e;
	printf("the value of the expression:%d",r);






}


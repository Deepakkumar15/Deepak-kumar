// programme to double the last digit
#include<stdio.h>
void main()
{	int a,b,c,r;
	printf("enter any number whose last digit is less than 5:");
	scanf("%d",&a);
	b=a/10;
	c=a%10;
	r=(b*10)+2*c;
	printf("the value of the expression:%d",r);








}

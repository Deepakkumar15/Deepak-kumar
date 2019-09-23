#include<stdio.h>
void main()
{	int x,y;
	printf("enter any number:");
	scanf("%3d",&x);
	y=(x%100)/10;
	printf("the second digit is:%d",y);
}

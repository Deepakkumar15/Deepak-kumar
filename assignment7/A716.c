#include<stdio.h>
void main()
{	int n,x,t,s;
	printf("enter how many numbers;:");
	scanf("%d",&n);
	printf("enter the numbers seprated by commas:");
	for(x=1;x<=n;x++)
	{ 	scanf("%d",&t);
	       	s=s+t;
	}
	printf("%d",s);
}

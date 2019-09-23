#include<stdio.h>
void main()
{	int n,x,t,s;
	printf("enter how many numbers are there:");
	scanf("%d",&n);
	printf("enter the numbers one by one seprated by commas:");
	for(x=1;x<=n;x++)
	{  scanf("%d",&t);
		s=s+t;
	}
	printf("\n%d",s);
	
}

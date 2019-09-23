#include<stdio.h>
void main()
{	int n,x,t,s;
	printf("enter how many numbers are there:");
	scanf("%d",&n);
	printf("entern the numbers one by one seprated by commas:");
	for(x=1;x<=n;x++)
	{  scanf("%d",&t);
	   s=s+t;

	}
	printf("%d\n",s);
}

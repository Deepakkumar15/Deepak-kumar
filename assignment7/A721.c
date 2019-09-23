#include<stdio.h>
#include<stdio.h>
void main()
{	int x,y,n,m,t,s=1;
	printf("enter the values of n and m respectively:");
	scanf("%d%d",&n,&m);
	printf("enter the numbers:");
	for(x=1;x<=n;x++)
	{    for(y=1;y<=m;y++)
		{scanf("%d",&t);
     	         s=s*t;
		}   
	}
	printf("%d",s);
}

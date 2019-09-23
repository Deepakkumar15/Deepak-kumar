#include<stdio.h>
#include<math.h>
void main()
{	int n,x,t;
	float s;
	printf("enter the value of dimensional space:" );
	scanf("%d",&n);
	printf("enter the cordinates of vector:");
	for(x=1;x<=n;x++)
	{   scanf("%d",&t);
	    s=sqrt(s*s+t*t);	
	}
	printf("%f",s);
}

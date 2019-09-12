// printing of specific numners 
#include<stdio.h>
void main()
{	int x,n;
	printf("enter the last number:");
	scanf("%d",&n);

	for (x=0;x<n;x++)
	if((x<20)||(x>50&&x<70)||(x>90))	
	{printf("\n %d",x);}



}

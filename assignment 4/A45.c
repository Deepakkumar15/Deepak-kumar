//programme for printing which will print all the multiple of 3 or 7
#include<stdio.h>
void main()
{	int x,n;
	printf("print all the multiples of 3 and 7 till:");
	scanf("%d",&n);

	for(x=0;x<n;x++)
	if((x%3==0)||(x%7==0))	
	{printf("\n %d",x);}	



}

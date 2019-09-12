//progarmme for printing all the multiple of 3 and 5 but not both
#include<stdio.h>
void main()

{	int x,n;
       	printf("print all the multiples of 3 and 5 but not both till:");
	scanf("%d",&n);
	for(x=0;x<=n;x++)
	if(((x%3==0)||(x%5==0))&&(x%15!=0))
	{printf("\n %d",x);}	





}

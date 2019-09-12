// progamme for printing all the even numbers but not the multiple of 3 and 5
#include<stdio.h>
void main()
{	int x,n;
	printf("print all even numbers but not the multiple of 3 and 5 till:");
	scanf ("%d",&n);

	for(x=0;x<=n;x++)
	if((x%2==0)&&(x%3!=0)&&(x%5!=0))	
	{printf("\n %d",x);}	





}

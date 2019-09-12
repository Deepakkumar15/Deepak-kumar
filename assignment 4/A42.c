// programme which prints all numbers between 20 and 40 and all even numbers between 50 and 80
#include<stdio.h>
void main()
{	int x;
	for(x=20;x<80;x++)
	if((x>20&&x<40)||((x>50&&x<80)&&(x%2==0)))
	{printf("\n %d",x);}
	




}

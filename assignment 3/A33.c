// programme for two numbers such that biggest will be printed first
#include<stdio.h>
#include<math.h>
void main()
{	float a,b,r,d;
	printf("enter any two numbers:");
	scanf("%f %f",&a,&b);
	
	if(a>b)
	{r=a;
	 d=b;
	}
	else
	{r=b;
	 d=a;
	}
	printf("\n the output is:%f %f",r,d);







}

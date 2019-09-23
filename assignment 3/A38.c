//programme for printing the different number in the three given numbers
#include<stdio.h>
#include<math.h>
void main()
{	float a,b,c,r;
	printf("enter any three values in which two are same:");
	scanf("%f %f %f",&a,&b,&c);

	if(a==b)
	{ r=c;
	}
	
	if(a==c)
	{r=b;
	}

	if(b==c)
	{r=a;
	}

	printf("the output value is:%f",r);





}

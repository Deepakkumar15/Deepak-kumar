//programme for finding the slope of the given line
#include<stdio.h>
#include<math.h>
void main()
{	float a,b,c,r;
	printf("enter the values of the variables for the line ax+by+c=0:");
	scanf("%f %f %f ",&a,&b,&c);
	r=-a/b; /* r is the slope of the given line */

	if(b==0)

      	printf("the given line is vetical:");

	else
       printf("the line is not vertical and the value of the slope is:%f",r);





}

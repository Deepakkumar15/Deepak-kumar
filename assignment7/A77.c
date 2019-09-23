#include<stdio.h>
#include<math.h>
void main()
{	float a,b,c,d,e,f,x,y,z;
	printf("enter the two vectors for the sum:");
	scanf("%fi%fj%fk %fi%fj%fk",&a,&b,&c,&d,&e,&f);
	x=a+d;
	y=b+e;
	z=c+f;
	printf("%fi+%fj+%fk",x,y,z);

}

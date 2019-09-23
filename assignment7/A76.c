#include<stdio.h>
#include<math.h>
void main()
{	float a,b,c,x,y,z,d;
	printf("enter the vector:");
	scanf("%fi%fj%fk",&a,&b,&c);
	d=sqrt(a*a+b*b+c*c);
	x=a/d;
	y=b/d;
	z=c/d;
	printf("%fi+%fj+%fk",x,y,z);
}

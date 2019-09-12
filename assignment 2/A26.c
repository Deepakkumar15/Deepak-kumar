//programme for finding the centre and radius of the circle using it's equation
#include<stdio.h>
#include<math.h>
void main()
{	float a,b,c,g,f,o,r;
	printf("enter the values of the variables whose circle's equatin is (x*x+y*y+ax+by+c=0):");
	scanf("%f %f %f",&a,&b,&c);
	g=-a/2;
	f=-b/2;
	o=(g,f);/*o is the centre of the circle */

	r=sqrt(g*g+f*f-c);/* r is the radius of the given circle*/
	printf(" the cordinates of the centre is: %f",o);
	printf("\n the value of the radius is:%f",r);





}

// progarmme for finding the angle of the triangle in degrees and radian
#include<stdio.h>
#include<math.h>
void main()
{	float a,b,c,A,A1;
	printf("enter the values of sides of the traingle:");
	scanf("%f %f %f",&a,&b,&c);
	A= acos((b*b+c*c-a*a)/2*b*c);
	printf("the value of the angle in radians is: %f",A);

	A1=(180*A)/3.1428571429;
	printf("\n the value of the angele in degrees is:%f",A1);








}

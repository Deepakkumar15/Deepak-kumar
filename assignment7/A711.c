#include<stdio.h>
#include<math.h>
void main()
{
float a,b,c,d,x1,x2,p,q;
printf("enter the values:");
scanf("%f%f%f",&a,&b,&c);
d=((b*b)-(4*a*c));
if(d>0)
{
    x1=(-b+sqrt(d))/(2*a);
    x2=(-b-sqrt(d))/(2*a);
    printf("\nreal roots: %f  %f",x1,x2);
}
else if(d==0)
{
    x1=-b/(2*a);
    printf("\nroots are: %f %f",x1,x1);
}

else 

{
   x1=(-b)/(2*a);
   p=(sqrt(-d))/(2*a);
   q=(-sqrt(-d))/(2*a);
   printf("\ncomplex roots are: %f + %fi",x1,p);
   printf("\ncomplex roots are: %f + %fi",x1,q);
}

}



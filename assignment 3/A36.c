//programme for printing the roots of a qudratic equation
#include<stdio.h>
#include<math.h>
void main()
{	float a,b,c,d,r1,r2,x1,p,q;
	printf("enter the values of the variables for the quadratic equation ax*x+bx+c=0:");
	scanf("%f %f %f",&a,&b,&c);
	d=(b*b)-(4*a*c);
	r1=(-b+sqrt(d))/(2*a);
	r2=(-b-sqrt(d))/(2*a);
	x1=(-b)/(2*a);
	
	p=sqrt(-d)/(2*a);
	q=-sqrt(-d)/(2*a);


	     if(d>0)
	     	{

		printf("\n the real and distinct roots are:%f %f",r1,r2);
	         }
	    else 
	    	{    
	    
	       if(d==0)
	       {	       
             	printf("\n the only root of the quadratic equation is:%f",x1); 
	       }
            
	    	else
	       { 
                printf("\nthe value of the complex root is: %f %f %f %f",x1,p,x1,q);
	       } 
	
	        
	       }
	
	}
	










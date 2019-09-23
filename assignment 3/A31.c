//programme for finding the biggest number
#include<stdio.h>
#include<math.h>
void main()
{	float a,b,c,r;
	printf("enter any three values:");
	scanf("%f %f %f",&a,&b,&c);
	if(a>b)
	{ 	
	  if (a>c)
	    { r=a;
	  
	    }	  
	else
	{  r=c;
	
	}

	}	
	
	else
	{  
	   if(b>c)
	   {  r=b;
	   
	   }	   
	  
	   else
	   { r=c;
	   
	   }


	}	

       printf("the biggest number is:%f",r);





}

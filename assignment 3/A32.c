// programme for finding the biggest number 
#include<stdio.h>
#include<math.h>
void main()
{	float a,b,c,d,r;
	printf("enter any four numbers:");
	scanf("%f %f %f %f",&a,&b,&c,&d);
	if(a>b)
	{    
	 if(a>c)
	 { 
	   if(a>d)
	   { r=a;}
	     
           else
           { r=d;}
	   
	 }	 
	  
	  else
	  {
	   if(c>d)
	   { r=c;}
	   else
	   { r=d;}
	   
	  
	  }	  
	
	
	}	

	else
	{ 
	  if(b>c)
	  {
	    if(b>d)
	    { r=b;}
  	    
	    else
	    { r=d;}
	    
	  } 
	  
	  
	  else
	  {
	     if(c>d)
	     { r=c;}
	     
	     else
	     { r=d;}
	     
	  
	  }
	  
	  
	}  
	 
       printf("the biggest number is:%f",r);	
	
	
}	
	
	
	
	
	
	
	
		











//programme for finding the middle number
#include<stdio.h>
#include<math.h>
void main()
{	float a,b,c,r;
	printf("enter any three vaulues:");
	scanf("%f %f %f",&a,&b,&c);

	if((a>b&&b>c)||(a<b&&b<c))
	{r=b;}

	if((b>a&&a>c)||(b<a&&a<c))
	{r=a;}

	if((a>c&&c>b)||(a<c&&c<b))
	{r=c;}

	printf("\n %f",r);










}

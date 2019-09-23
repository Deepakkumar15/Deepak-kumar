#include<stdio.h>
void main()
{	int x,y,z;
	for(z=1;z<=6;z++)
	printf("%c",64+z);
	printf("\n");
	for(y=1;y<=5;y++)
	{	for(x=1;x<=y;x++)
		printf(" ");
		for(x=1;x<=6-y;x++)
		printf("%c",64+x+y);	
	
	printf("\n");
	}
}

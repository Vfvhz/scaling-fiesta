#include<stdio.h>
#include<stdlib.h>
int main(void)
{	
	int x,y,c;
	printf("(A)");
	for (x=0;x<10;x++)
	{
		for (y=0;y<x;y++)
		{
			printf("%s", "*");
		}
		printf("\n");
	}
	printf("\n\n(B)\n");
	for (x=10;x>0;x--)
	{
		for (y = 0; y < x; y++)
		{
			printf("%s", "*");
		}
		printf("\n");
	}
	printf("\n\n(C)\n");
	for (x = 10; x > 0; x--)
	{
		for (c=0;c<(10-x);c++)
		{
			printf("%s", " ");
		}
		for (y = 0; y < x; y++)
		{

			printf("%s", "*");
		}
		printf("\n");
	}
	printf("\n\n(D)\n");
	for (x = 1; x <11; x++)
	{
		for (c = 0; c < (10 - x); c++)
		{
			printf("%s", " ");
		}
		for (y = 0; y < x; y++)
		{

			printf("%s", "*");
		}
		printf("\n");
	}
	return 0;
}
#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)
int main(void)
{
	int a, b,x,y;
	x,y=0;
	printf("Enter rectangle's length:");
	scanf("%d", &b);
	printf("Enter rectangle's breadth:");
	scanf("%d", &a);
	for (x = 0; x < b; x++)
	{
		for (y=0;y<a;y++)
		{
			if ((x==0)||(x==b-1))
			{
				printf("+");
			}
			else if ((y==0)||(y==a-1))
			{
				printf("+");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	
}
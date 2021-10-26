#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int x, y,c;
	c = -8;
	for (x=-4;x<5;x++)
	{
		for (y=0;y<abs(x);y++)
		{
			printf(" ");
		}
		for (y=0;y<9-abs(c);y++)
		{
			printf("*");
		}
		printf("\n");
		c = c + 2;
	}
	return 0;
}
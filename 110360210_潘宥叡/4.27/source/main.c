#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int a,b,c;
	for (a=1;a<501;a++)
	{
		for (b = 1; b < 501; b++)
		{
			for (c = 1;c < 501; c++)
			{
				if (a*a+b*b==c*c)
				{
					printf("(%d,%d,%d)\n", a, b, c);
				}
			}
		}
	}
}
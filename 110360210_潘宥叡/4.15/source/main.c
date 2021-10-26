#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int i;
	double a;
	a = 5000;
	printf("$5000 for 15years rate:10.0%%");
	for (i=0;i<15;i++)
	{
		a = a * 1.1;
	}
	printf("\nAfter 15years¡G$%0.2f", a);
	a = 5000;
		printf("\n$5000 for 15years rate:10.5%%\n");
		for (i = 0; i < 15; i++)
		{
			a = a * 1.105;
		}
	printf("After 15years¡G$%0.2f", a);
	a = 5000;
		printf("\n$5000 for 15years rate:11.0%%\n");
		for (i = 0; i < 15; i++)
		{
			a = a * 1.11;
		}
	printf("After 15years¡G$%0.2f", a);
	a = 5000;
		printf("\n$5000 for 15years rate:11.5%%\n");
		for (i = 0; i < 15; i++)
		{
			a = a * 1.115;
		}
	printf("After 15years¡G$%0.2f", a);
	a = 5000;
		printf("\n$5000 for 15years rate:12.0%%\n");
		for (i = 0; i < 15; i++)
		{
			a = a * 1.12;
		}
	printf("After 15years¡G$%0.2f", a);
}
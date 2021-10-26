#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)
int a;
float b;
int main(void)
{
	while (a!=-1)
	{
		printf("Enter # of hours worked (-1 to end):");
		scanf("%d", &a);
		if (a!=-1)
		{
			printf("Enter hourly rate of the worker ($00.00):");
			scanf("%f", &b);
			if (a <= 40)
			{
				printf("Salary is $%0.2f\n\n", a*b);
			}
			else
			{
				printf("Salary if %0.2f\n\n", 40 * b + (a - 40)*(b*1.5));
			}
		}
	}
	return 0;
}
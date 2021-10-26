#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)
float a;
float main(void)
{
	while (a != -1)
	{
		printf("Enter sales in dollars(-1 to end)¡G");
		scanf("%f", &a);
		if (a!=-1)
		{
			printf("\nSalary is¡G%0.2f \n", a*0.09 + 200);
		}
	}
}
#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)
float a, b;
int c;
int main(void)
{
	while (a!=-1)
	{			
		printf("Enter loan principal (-1 to end)¡G");
		scanf("%f", &a);
		if (a!=-1)
		{
			printf("Enter interest rate¡G");
			scanf("%f", &b);
			printf("Enter term of the loan in days¡G");
			scanf("%d", &c);
			printf("The interest charge is $%0.2f\n\n", a*b*c / 365);
		}
	}	
	return 0;
}
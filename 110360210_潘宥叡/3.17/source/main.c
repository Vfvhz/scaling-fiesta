#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)
int a;
float b, c, d, e;
int main(void)
{
	while (a!=-1)
	{
		printf("Enter account number(-1 to end)¡G");
		scanf("%d", &a);
		if (a!=-1)
		{
			printf("Enter beginning balance¡G");
			scanf("%f", &b);
			printf("Enter total charges¡G");
			scanf("%f", &c);
			printf("Enter total credits¡G");
			scanf("%f", &d);
			printf("Enter credit limit¡G");
			scanf("%f", &e);
			if (b + c - d > e)
			{
				printf("Account¡G		%d\nCredit limit¡G		%0.2f\nBalance¡G		%0.2f\nCredit Limit Exceeded.", a, e, b + c - d);
			}
		}
		

	}


}
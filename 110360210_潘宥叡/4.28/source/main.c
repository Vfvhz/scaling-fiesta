#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)
int main(void)
{
	int a;
	float b, c;
	printf("1.Managers\n2.hourly workers\n3.commission workers\n4. pieceworkers\n");
	printf("�п�J1�B2�B3�B4�䤤�@�ءG");
	scanf("%d", &a);
	switch (a)
	{
	case 1:
			printf("�п�J�A���C�P�~��:");
			scanf("%f", &b);
			printf("���P�~�ꬰ:%0.2f", b);
			break;
	case 2:
			printf("�п�J�A�����P�ɼ�:");
			scanf("%f", &b);
			printf("�п�J�A�����~:");
			scanf("%f", &c);
			if (b > 40)
			{
				printf("���P�~�ꬰ:%0.2f", 40 * c + (b - 40)*c*1.5);
			}
			else
			{
				printf("���P�~�ꬰ�G%0.2f", b*c);
			}
			break;
	case 3:
			printf("�п�J���P�P���B:");
			scanf("%f", &b);
			printf("���P�~�ꬰ:%0.2f", 250 + b * 0.057);
			break;
	case 4:
			printf("�п�J�A�����P���פl��:");
			scanf("%f", &b);
			printf("�п�J�@�Ӯפl�����B:");
			scanf("%f", &c);
			printf("���P�~�ꬰ:%0.2f", b*c);
			break;
	default:
		break;
	}
	/*if (a==1)
	{
		printf("�п�J�A���C�P�~��:");
		scanf("%f", &b);
		printf("���P�~�ꬰ:%0.2f", b);
	}
	else if(a==2)
	{
		printf("�п�J�A�����P�ɼ�:");
		scanf("%f", &b);
		printf("�п�J�A�����~:");
		scanf("%f", &c);
		if (b>40)
		{
			printf("���P�~�ꬰ:%0.2f", 40 * c + (b - 40)*c*1.5);
		}
		else
		{
			printf("���P�~�ꬰ�G%0.2f", b*c);
		}
	}
	else if(a==3)
	{
		printf("�п�J���P�P���B:");
		scanf("%f", &b);
		printf("���P�~�ꬰ:%0.2f", 250 + b * 0.057);
	}
	else if(a==4)
	{
		printf("�п�J�A�����P���פl��:");
		scanf("%f", &b);
		printf("�п�J�@�Ӯפl�����B:");
		scanf("%f", &c);
		printf("���P�~�ꬰ:%0.2f", b*c);
	}*/

}
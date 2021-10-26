#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)
int main(void)
{
	int a;
	float b, c;
	printf("1.Managers\n2.hourly workers\n3.commission workers\n4. pieceworkers\n");
	printf("請輸入1、2、3、4其中一種：");
	scanf("%d", &a);
	switch (a)
	{
	case 1:
			printf("請輸入你的每周薪資:");
			scanf("%f", &b);
			printf("本周薪資為:%0.2f", b);
			break;
	case 2:
			printf("請輸入你的本周時數:");
			scanf("%f", &b);
			printf("請輸入你的時薪:");
			scanf("%f", &c);
			if (b > 40)
			{
				printf("本周薪資為:%0.2f", 40 * c + (b - 40)*c*1.5);
			}
			else
			{
				printf("本周薪資為：%0.2f", b*c);
			}
			break;
	case 3:
			printf("請輸入本周銷售額:");
			scanf("%f", &b);
			printf("本周薪資為:%0.2f", 250 + b * 0.057);
			break;
	case 4:
			printf("請輸入你的本周的案子數:");
			scanf("%f", &b);
			printf("請輸入一個案子的金額:");
			scanf("%f", &c);
			printf("本周薪資為:%0.2f", b*c);
			break;
	default:
		break;
	}
	/*if (a==1)
	{
		printf("請輸入你的每周薪資:");
		scanf("%f", &b);
		printf("本周薪資為:%0.2f", b);
	}
	else if(a==2)
	{
		printf("請輸入你的本周時數:");
		scanf("%f", &b);
		printf("請輸入你的時薪:");
		scanf("%f", &c);
		if (b>40)
		{
			printf("本周薪資為:%0.2f", 40 * c + (b - 40)*c*1.5);
		}
		else
		{
			printf("本周薪資為：%0.2f", b*c);
		}
	}
	else if(a==3)
	{
		printf("請輸入本周銷售額:");
		scanf("%f", &b);
		printf("本周薪資為:%0.2f", 250 + b * 0.057);
	}
	else if(a==4)
	{
		printf("請輸入你的本周的案子數:");
		scanf("%f", &b);
		printf("請輸入一個案子的金額:");
		scanf("%f", &c);
		printf("本周薪資為:%0.2f", b*c);
	}*/

}
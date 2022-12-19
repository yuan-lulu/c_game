#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//猜数游戏
//int main()
//{
//	int retry=1,ant,a,remain=10;
//	srand(time(NULL));
//	printf("目标数字的范围为：100-999\n");
//	ant = 100 + rand() % 900;
//	do
//	{
//		printf("请输入你猜的数字：\n");
//		scanf_s("%d", &a);
//		if (a > ant)
//			printf("小一点\n");
//		else if (a < ant)
//			printf("大一点\n");
//		remain--;
//	} while (a!=ant||remain==0);
//	printf("\a恭喜你猜对了\n");
//
//	return 0;
//}
//int main()
//{
//	char  a[6][10]= { "大吉","中吉","小吉","末吉","凶","大凶"};
//	srand(time(NULL));
//	printf("%s\n",a[ rand() % 7]);
//
//	return 0;
//}

//int main()
//{
//	int ans, no,remain=20,stage=0,i=0;
//	int arr[20];
//	srand(time(NULL));
//		printf("请猜出-999到999之间的一个数字：\n");
//		ans = -999+rand() %2000;
//		do
//		{
//			printf("还剩%d机会，是多少呢？\n",remain--);
//			scanf_s("%d", &no);
//			arr[stage++] = no;
//			if (no > ans)
//				printf("再小一点\n");
//			else if (no < ans)
//				printf("再大一点\n");
//		} while (no != ans && remain >= 0);
//			if (no == ans)
//				printf("恭喜你猜对了\n");
//			else
//				printf("很遗憾游戏结束\n\n");
//		printf("\n-------输入记录--------\n");
//		for (i = 0; i < stage; i++)
//			printf("第%d次输入%d，距离目标数字：%d\n", i + 1, arr[i],arr[i]- ans);
//
//	return 0;
//}

//int main()
//{
//	int ans, no, remain1=10, stage=0,t,a,remain2=20,i;
//	int arr[50];
//	srand(time(NULL));
//	while (1)
//	{
//		t = rand() % 997 + 3 % 3;
//			if (t % 3 == 0)
//			{
//				ans = t;
//				break;
//			}
//	}
//	printf("请选择游戏的类型：1or2?\n");
//	scanf_s("%d", &a);
//	if (a == 1)
//	{
//		do
//		{
//			printf("你还剩%d次游戏机会，是多少呢？\n", remain1--);
//			scanf_s("%d", &no);
//			if (no % 3 != 0)
//			{
//				break;
//				printf("游戏结束\n");
//			}
//			else
//			{
//				arr[stage++] = no;
//			}
//			if (no > ans)
//			printf("再小一点\n");
//			else if (no < ans)
//			printf("再大一点\n");
//		} while (no != ans && remain1 >= 0);
//		if (no == ans)
//	    printf("恭喜你猜对了\n");
//		else
//		printf("很遗憾游戏结束\n\n");
//		printf("\n-------输入记录--------\n");
//		for (i = 0; i < stage; i++)
//		printf("第%d次输入%d，距离目标数字：%d\n", i + 1, arr[i], arr[i] - ans);
//
//	}
//	else
//	{
//		do
//		{
//			printf("你还剩%d次游戏机会，是多少呢？\n", remain2--);
//			scanf_s("%d", &no);
//			if (no % 3 != 0)
//			{
//				printf("请重新输入数据：\n");
//				scanf_s("%d", &no);
//			}
//			else
//			{
//				arr[stage++] = no;
//			}
//			if (no > ans)
//				printf("再小一点\n");
//			else if (no < ans)
//				printf("再大一点\n");
//		} while (no != ans && remain2>= 0);
//		if (no == ans)
//			printf("恭喜你猜对了\n");
//		else
//			printf("很遗憾游戏结束\n\n");
//		printf("\n-------输入记录--------\n");
//		for (i = 0; i < stage; i++)
//			printf("第%d次输入%d，距离目标数字：%d\n", i + 1, arr[i], arr[i] - ans);
//
//
//
//
//	}
//}
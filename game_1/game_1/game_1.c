#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//������Ϸ
//int main()
//{
//	int retry=1,ant,a,remain=10;
//	srand(time(NULL));
//	printf("Ŀ�����ֵķ�ΧΪ��100-999\n");
//	ant = 100 + rand() % 900;
//	do
//	{
//		printf("��������µ����֣�\n");
//		scanf_s("%d", &a);
//		if (a > ant)
//			printf("Сһ��\n");
//		else if (a < ant)
//			printf("��һ��\n");
//		remain--;
//	} while (a!=ant||remain==0);
//	printf("\a��ϲ��¶���\n");
//
//	return 0;
//}
//int main()
//{
//	char  a[6][10]= { "��","�м�","С��","ĩ��","��","����"};
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
//		printf("��³�-999��999֮���һ�����֣�\n");
//		ans = -999+rand() %2000;
//		do
//		{
//			printf("��ʣ%d���ᣬ�Ƕ����أ�\n",remain--);
//			scanf_s("%d", &no);
//			arr[stage++] = no;
//			if (no > ans)
//				printf("��Сһ��\n");
//			else if (no < ans)
//				printf("�ٴ�һ��\n");
//		} while (no != ans && remain >= 0);
//			if (no == ans)
//				printf("��ϲ��¶���\n");
//			else
//				printf("���ź���Ϸ����\n\n");
//		printf("\n-------�����¼--------\n");
//		for (i = 0; i < stage; i++)
//			printf("��%d������%d������Ŀ�����֣�%d\n", i + 1, arr[i],arr[i]- ans);
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
//	printf("��ѡ����Ϸ�����ͣ�1or2?\n");
//	scanf_s("%d", &a);
//	if (a == 1)
//	{
//		do
//		{
//			printf("�㻹ʣ%d����Ϸ���ᣬ�Ƕ����أ�\n", remain1--);
//			scanf_s("%d", &no);
//			if (no % 3 != 0)
//			{
//				break;
//				printf("��Ϸ����\n");
//			}
//			else
//			{
//				arr[stage++] = no;
//			}
//			if (no > ans)
//			printf("��Сһ��\n");
//			else if (no < ans)
//			printf("�ٴ�һ��\n");
//		} while (no != ans && remain1 >= 0);
//		if (no == ans)
//	    printf("��ϲ��¶���\n");
//		else
//		printf("���ź���Ϸ����\n\n");
//		printf("\n-------�����¼--------\n");
//		for (i = 0; i < stage; i++)
//		printf("��%d������%d������Ŀ�����֣�%d\n", i + 1, arr[i], arr[i] - ans);
//
//	}
//	else
//	{
//		do
//		{
//			printf("�㻹ʣ%d����Ϸ���ᣬ�Ƕ����أ�\n", remain2--);
//			scanf_s("%d", &no);
//			if (no % 3 != 0)
//			{
//				printf("�������������ݣ�\n");
//				scanf_s("%d", &no);
//			}
//			else
//			{
//				arr[stage++] = no;
//			}
//			if (no > ans)
//				printf("��Сһ��\n");
//			else if (no < ans)
//				printf("�ٴ�һ��\n");
//		} while (no != ans && remain2>= 0);
//		if (no == ans)
//			printf("��ϲ��¶���\n");
//		else
//			printf("���ź���Ϸ����\n\n");
//		printf("\n-------�����¼--------\n");
//		for (i = 0; i < stage; i++)
//			printf("��%d������%d������Ŀ�����֣�%d\n", i + 1, arr[i], arr[i] - ans);
//
//
//
//
//	}
//}
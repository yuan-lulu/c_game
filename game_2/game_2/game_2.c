#include<stdio.h>
#include<time.h>
#include<string.h>
#include<windows.h>
//int sleep(unsigned long x)
//{
//	clock_t c1 = clock(), c2;
//	do
//	{
//		if ((c2 = clock()) == (clock_t)-1)
//			return 0;
//	} while (1000.0 * (c2 - c1) / CLOCKS_PER_SEC < x);
//	return 1;
//}
//int main()
//{
//	int i;
//	clock_t c;
//	for (i = 10; i > 0; i--)
//	{
//		printf("\r%2d", i);
//		fflush(stdout);
//		sleep(1000);
//	}

//printf("\r\aFIRE\n");
//c = clock();
//printf("����ʼ���к󾭹��ˣ�%.1f�롣\n", (double)c / CLOCKS_PER_SEC);
//int h = ((double)c / CLOCKS_PER_SEC) / 3600 ;
//int min = ((double)c / CLOCKS_PER_SEC-h*3600)/60;
//int s = (double)c / CLOCKS_PER_SEC - h * 3600 - min * 60;
//printf("����ʼ���к󾭹��ˣ�%02d:%02d:%02d��\n", h, min, s);
//return 0;
//}

//a/*
	/*} while (1000.0 * (c2 - c1) / CLOCKS_PER_SEC < x);
	return 1;
}
int main()
{
	int i;
	int cnt = 0;
	char name[] = "yuanlulu";
	int name_len = strlen(name);
	while (1)
	{
		putchar('\r');
		for (i = 0; i < name_len; i++)

		{
			if (cnt + i < name_len)
				putchar(name[cnt + i]);
			else
				putchar(name[cnt + i - name_len]);
		}

		fflush(stdout);
		sleep(500);
		if (cnt > 0)
			cnt--;
		else
			cnt = name_len - 1;
	}
}*/

//int main()
//{
//	int x,i;
//	printf("����������:\n");
//	scanf_s("%d",& x);
//	for (i = 1; i <=x; i++)
//		printf("%*d\n", i, i % 10);
//	return 0;
//}
//int cmp_float(const void* e1, const void* e2)
//{
//	if (*(float*)e1 == *(float*)e2)
//		return 0;
//	else if (*(float*)e1 > *(float*)e2)
//		return 1;
//	else
//		return -1;
//}
//


//������Ұ������ѵ����
//int main()
//{
//	srand(time(NULL));
//	int a, b, c, x, n, i, c;
//	clock_t start, end,end1,start1;
//	start = clock();
//	float ave;
//	for (i = 0; i < 3; i++)
//	{
//		start1 = clock();
//		a = 10 + rand() % 90;
//		b= 10 + rand() % 90;
//		c = 10 + rand() % 90;
//		n = rand() % 17;
//		printf("%d%*s+%*s%d%*s+%*s%d\n" ,a, n, " ", n," ", b, n, " ", n," ", c);
//		do
//		{
//			printf("�������������\n");
//			scanf_s("%d", &x);
//		} while (x != a + b + c);
//		end1 = clock();
//		ave = (double)(end1 - start1) / CLOCKS_PER_SEC;
//		printf("һ����ʱ��%.1f\n", ave);
//	}
//	printf("�ش����\n");
//	end = clock();
//	printf("ƽ����ʱ��%.1f", ((double)(end - start) / CLOCKS_PER_SEC)/3.0);
//	return 0;
//}


//int main()
//{
//	srand(time(NULL));
//	int a, b, c, x, n, i,d,f=1;
//	clock_t start, end;
//	start = clock();
//	float ave;
//	for (i = 0; i < 3; i++)
//	{
//		
//		a = 10 + rand() % 90;
//		b = 10 + rand() % 90;
//		c = 10 + rand() % 90;
//		n = rand() % 17;
//		d = 1+rand() % 4;
//		switch (d)
//		{
//		case 1:printf("%d%*s+%*s%d%*s+%*s%d\n", a, n, " ", n, " ", b, n, " ", n, " ", c);
//			break;
//		case 2:printf("%d%*s-%*s%d%*s+%*s%d\n", a, n, " ", n, " ", b, n, " ", n, " ", c);
//			break;
//		case 3:
//			printf("%d%*s+%*s%d%*s-%*s%d\n", a, n, " ", n, " ", b, n, " ", n, " ", c);
//			break;
//		case 4:
//			printf("%d%*s-%*s%d%*s-%*s%d\n", a, n, " ", n, " ", b, n, " ", n, " ", c);
//			break;
//
//		}
//
//		do
//		{
//			printf("�������������\n");
//			scanf_s("%d", &x);
//			if (d == 1)
//			{
//				if (x == a + b + c)
//					f = 0;
//			}
//			else if (d == 2)
//			{
//				if (x == a - b + c)
//					f = 0;
//			}
//			else if (d == 3)
//			{
//				if (x == a + b - c)
//					f = 0;
//			}
//			else
//			{
//				if (x == a - b - c)
//					f = 0;
//			}
//		} while (f);
//		
//	}
//	printf("�ش����\n");
//	end = clock();
//	printf("ƽ����ʱ��%.1f", ((double)(end - start) / CLOCKS_PER_SEC) / 3.0);
//	return 0;
//}

//��дһ�������������ܴ��ַ�����ͷ��һ��ʾ�ַ�
//int sleep(unsigned long x)
//{
//	clock_t c1 = clock(), c2;
//	do
//	{
//		if ((c2 = clock()) == (clock_t)-1)
//			return 0;
//	} while (1000.0 * (c2 - c1) / CLOCKS_PER_SEC < x);
//	return 1;
//}
//void gput( const char* pch, int speed)
//{
//	while (*pch != '\0')
//	{
//	
//		printf("%c\r", *pch);
//		pch++;
//		
//		Sleep(speed);
//
//	}
//}
//int main()
//{
//	char ch[]= "ABC";
//		gput(ch,1000);
//
//	return 0;
//}

//int main()
//{
//	printf("ABCD");
//	Sleep(1000);
//	printf("\r1234");
//
//}

//��д��˸��ʵ�ַ����ĺ���
//void bput(char* pch, int d, int e, int n)
//{
//	int i;
//	for (i = 0; i < n; i++)
//	{
//		printf("%s\r", pch);
//		Sleep(d);
//		printf("        ");
//		printf("\r");
//		Sleep(e);
//
//	}
//}
//int main()
//{
//	int n;
//	char ch[] = "yuanlulu";
//	printf("������Ҫ��ʾ�Ĵ�����\n");
//	scanf_s("%d", &n);
//	bput(ch, 1000, 1000, n);
//	return 0;
//}

//��дһ������Ļ����ʾ�ַ����ĺ���
//void telop(const char* pch, int direction,int speed, int n)
//{
//	int i;
//	if (direction == 1)
//	{
//		for (i = 0; i < n; i++)
//		{
//			printf("%s\r", pch);
//			Sleep(speed);
//			printf("        ");
//			Sleep(speed);
//			putchar('\r');
//		}
//
//
//	}
//
//}
//int main()
//{
//	char ch[] = "yuanlulu";
//	int direction,n;
//	printf("��������ĻҪ�����ķ���0����������     1����������\n");
//	scanf_s("%d", &direction);
//	printf("������Ҫ�����Ĵ�����\n");
//	scanf_s("%d", &n);
//	telop(ch, direction, 1000, n);
//	return 0;
//}



#define  _CRT_SECURE_NO_WARNINGS 1
//��ӡ1000-2000������
//�ܱ�4����ȴ���ܱ�100�������ܱ�400��������ݾ�������
#include <stdio.h>
int main()
{
	int n = 0;
	int count = 0;
	for (n = 1000; n <= 2000; n++)
	{
		if ((n % 4 == 0 && n % 100 != 0) || n % 400 == 0)
		{
			printf("%d ", n);
		count++;
		}
	}
	printf("\n����Ϊ��%d\n", count);
	return 0;
}

//��ӡ100-200֮�������
#include <stdio.h>
int main()
{
	int i = 0;
	for (i = 100; i <= 200; i++)
	{
     //��2->i-1֮���Գ�
		int j = 0;
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				break;
			}
		}
		if (j == i)
		{
			printf("%d ", i);
		}
	}
	return 0;
}

#include <stdio.h>
int main()
{
	int i = 0;
	int count = 0;
	for (i = 100; i <= 200; i++)
	{
		int j = 0;
		int flag = 1; //����i��������
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				flag = 0; //��������
				break;
			}
		}
		if (flag == 1) //������
		{
			printf("%d ", i);
			count++;
		}
	}
	printf("\n�����ǣ�%d", count);
	return 0;
}
//
//�Ż���
//���һ��������д��m==a*b
//a��b��������һ��������<=��ƽ��m��
//sqrt->��ƽ������	-math.hͷ�ļ�
#include <stdio.h>
#include <math.h>
int main()
{
	int i = 0;
	int count = 0;
	//for (i = 100; i <= 200; i++)
	for (i = 101; i <= 200; i+=2)   //���Ž�
	{
		int j = 0;
		int flag = 1; //����i��������
		for (j = 2; j <= sqrt(i); j++)
		{
			if (i % j == 0)
			{
				flag = 0; //��������
				break;
			}
		}
		if (flag == 1) //������
		{
			printf("%d ", i);
			count++;
		}
	}
	printf("\n�����ǣ�%d", count);
	return 0;
}







#define  _CRT_SECURE_NO_WARNINGS 1
n�Ľ׳�
#include <stdio.h>
int main()
{
	int m = 0;
	int n = 0;
	int mul = 1;

	scanf("%d", &n);
	for (m = 1; m <= n; m++)
	{
	       mul = mul * m;

	}
	printf("%d\n", mul);
	return 0;
}

#include <stdio.h>
int main()
{
	int i = 0;
	int n = 0;
	int mul = 0;

	for (n = 1; n <= 9; n++)
	{
	for (i = 1; i <= n; i++)
	{
		mul = i * n;
		printf("%d*%d=%d\n",i,n, mul);
	}
	}

	return 0;
}

�׳����
#include <stdio.h>
int main()
{
	int i = 0;
	int n = 0;
	int mul = 1;
	int sum = 0;
	for (n = 1; n <=3; n++)
	{
		mul = 1;  //����n�Ľ׳�֮ǰ����mul�ĳ�ʼֵ��Ϊ1
	    for (i = 1; i <= n; i++)
	    {
		     mul = mul * i;

	    }
		sum = sum + mul;
	}

	printf("%d\n", sum);
	return 0;
}

//�Ż�
#include <stdio.h>
int main()
{
	int i = 0;
	//int n = 0;
	int mul = 1;
	int sum = 0;
	for (i = 1; i <= 4; i++)
	{
		mul = mul * i;
		sum = sum + mul;
	}
	printf("%d\n", sum);

	return 0;
}
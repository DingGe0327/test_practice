#define  _CRT_SECURE_NO_WARNINGS 1
//��ӡ1-100֮��3�ı���
#include <stdio.h>
int main()
{
	int i = 0;
	for (i = 0; i <= 100; i+=3)
	{
		
		printf("%d ", i);
	}
	return 0;
}

#include <stdio.h>
int main()
{
	int i = 0;
	for (i = 0; i <= 100; i++ )
	{
		if (i % 3 == 0)
		{
		     printf("%d ", i);
		}

	}
	return 0;
}

//�������������Լ��
#include <stdio.h>
int main()
{
	int m = 0;
	int n = 0;
	scanf("%d%d", &m, &n);
	int max = m > n ? n : m;
	while (1)
	{
		if (m % max == 0 && n % max == 0)
		{

			printf("���Լ����%d\n", max);
		    break;
		}
		max--;

	}
	return 0;
}

//շת�����
#include <stdio.h>
int main()
{
	int m = 0;
	int n = 0;
	int t = 0;
	scanf("%d%d", &m, &n);
	while ( t = m % n)
	{
		m = n;
		n = t;
		//break; // ���ﲻ��дbreak
	}
	printf("���Լ���ǣ�%d\n ", n);
	return 0;
}











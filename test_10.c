#define  _CRT_SECURE_NO_WARNINGS 1
//��1-100֮����9���ֵĴ���
#include <stdio.h>
int main()
{
	int a = 0;
	int count = 0;
	for (a = 1; a <= 100; a++)
	{
		//if ((a % 10 == 9)||(a / 10 == 9))  //����һ��
		if (a % 10 == 9)
		{
			count++;
		}
		//else if (a / 10 == 9)//���Ҳ������һ��
		if (a / 10 == 9)
	    {
			count++;
		}
	}
	printf("%d\n", count);
	return 0;
}













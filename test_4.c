#define  _CRT_SECURE_NO_WARNINGS 1
//��д���룬ģ���û���¼��������������������
#include <stdio.h>
#include <string.h>
int main()
{
	char password[20] = { 0 };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		scanf("%s", password); //passwod��������������ĵ�ַ	
		if (strcmp(password, "123456") == 0)   //�����ַ����Ƚ� ��strcmp
		{
			printf("��½�ɹ�\n");
			break;  //һ��Ҫд������
		}
		else
			printf("�������\n");
		//break;
	}
	if (i == 3)
	{
		printf("��¼ʧ��\n");
	}
	return 0;
}

#include <stdio.h>
#include <string.h>

int main()
{
	char str1[15];
	char str2[15];
	int ret;


	strcpy(str1, "abcdef");
	strcpy(str2, "acaaaa");

	ret = strcmp(str1, str2);

	if (ret < 0)
	{
		printf("str1 С�� str2");
	}
	else if (ret > 0)
	{
		printf("str1 ���� str2");
	}
	else
	{
		printf("str1 ���� str2");
	}

	return(0);
}





#define  _CRT_SECURE_NO_WARNINGS 1
//��һ���ַ���ת��������

//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	char str[] = "123ert";
//	int num = atoi(str);  //����һ���ַ�����ʶ��Ϊ����ʱ��������ֹͣ���������ַ���
//	printf("%d ", num);
//	return 0;
//}

//#include <stdio.h>
//int stringToInt(const char* str) 
//{
//    int num = 0;
//    int sign = 1;
//    int i = 0;
//
//    // �������λ
//    if (str[0] == '-')
//    {
//        sign = -1;
//        i = 1;
//    }
//
//    // �����ַ����е�ÿ���ַ�
//    while (str[i] != '\0') {
//        // ȷ���ַ�������
//        if (str[i] >= '0' && str[i] <= '9')
//        {
//            // ���ַ�ת��Ϊ���֣����ۼӵ������
//            num = num * 10 + (str[i] - '0');
//            i++;
//        }
//        else 
//        {
//            // �������ַ����˳�ѭ��
//            break;
//        }
//    }
//
//    // ���Ϸ���λ
//    num = num * sign;
//
//    return num;
//}
//
//int main()
//{
//    char str[] = "12345";  // �����������ַ���
//    int num = stringToInt(str);   // �����Զ�����ַ���ת������
//
//    printf("ת���������ֵΪ: %d\n", num);
//
//    return 0;
//}

#include <stdio.h>
#include <stdbool.h>
#include <limits.h> // For INT_MAX and INT_MIN

int stringToInt(const char* str)
{
    if (str == NULL) 
    {
        printf("Error: ����Ϊ��ָ�롣\n");
        return 0;
    }

    int num = 0;
    int sign = 1;
    int i = 0;

    // �������λ
    if (str[0] == '-') 
    {
        sign = -1;
        i = 1;
    }

    // �����ַ����е�ÿ���ַ�
    while (str[i] != '\0') 
    {
        // ȷ���ַ�������
        if (str[i] >= '0' && str[i] <= '9')
        {
            // ����������
            if (num > INT_MAX / 10 || (num == INT_MAX / 10 && (str[i] - '0') > INT_MAX % 10)) 
            {
                printf("Error: ���볬��������Χ��\n");
                return 0;
            }
            // ���ַ�ת��Ϊ���֣����ۼӵ������
            num = num * 10 + (str[i] - '0');
            i++;
        }
        else 
        {
            // �������ַ������������Ϣ������0
            printf("Error: ��������Ƿ��ַ���\n");
            return 0;
        }
    }

    // ���Ϸ���λ
    num = num * sign;

    return num;
}

int main() {
    char str1[] = "12345";  // ��Ч�������ַ���
    int num1 = stringToInt(str1);
    printf("ת���������ֵΪ: %d\n", num1);

    char str2[] = "-6789";  // ��Ч�ĸ����ַ���
    int num2 = stringToInt(str2);
    printf("ת���������ֵΪ: %d\n", num2);

    char str3[] = "abcd";   // �����Ƿ��ַ����ַ���
    int num3 = stringToInt(str3);

    char* str4 = NULL;      // ��ָ������
    int num4 = stringToInt(str4);

    return 0;
}









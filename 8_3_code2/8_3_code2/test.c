//��ѧC����DAY2

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

int main()
{
	//�ַ�������һ���ַ�
	//˫������������һ���ַ�
	"abcdef";

	//�ַ����飨������һ����ͬ���͵�Ԫ�أ�
	char arr[] = "hello";
	//�ַ����ڽ�β������һ��\0�ַ�
	//\0���ַ���������־

	char arr1[] = "abc";
	char arr2[] = { 'a','b','c' };

	//��ӡ�ַ���%s
	printf("%s\n", arr1);
	printf("%s\n", arr2);
	printf("\n");
	//�ɼ��ַ���������־\0��Ҫ��
    //��һ���ַ�������
	//strlen = string length
	printf("%d\n", strlen(arr1));//��ӡ�������
	printf("%d\n", strlen(arr2));//��ӡ���Ϊ���ֵ
	//������־\0�����볤�Ⱥ����ݣ�������Ԫ�ظ���
	printf("\n");

	return 0;
}

//��ѧC����DAY3

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

int main()
{
	//ת���ַ�
	printf("c:\test\test.c");//\��tת����ԭ������˼
	printf("c:\\test\\test.c");// \\��ʾһ��б�ܣ���ֹ��ת��
	printf("\n");
	//C����ת���ַ��� \? \' \" \\ \a \b \f \n \r \t \v \ddd(ddd��ʾһ������8��������) \xdd(dd��ʾ����16��������)
	
	printf("%c\n",'\130');//X ���� ASCII��ֵΪ88
	printf("%c\n", '\101');//A ���� ASCII��ֵΪ65��8����Ϊ101
	//���ASCII��
	//���ԣ������д�ӡ�Ľ��
	printf("%d\n", strlen("c:\test\328\test.c"));//ע�⣡ 1��ת���ַ���һ������  2��8���Ʋ�������8
	printf("\n");
	
	//ע��
	//int a = 1; //ΪC++ע�ͷ��
	/*
	int b = 1��
	*/  //ΪC����ע�ͷ�񣨲�֧��Ƕ��ע�ͣ�

	//ѡ�����
	int input = 0;//�����ֵ
	printf("����㹤:>\n");
	printf("Ҫ�ú�ѧϰ��1/0����:>\n");
	scanf("%d", &input);
	if (input == 1)
	{
		printf("��offer\n");
	}
	else
	{
		printf("������\n");
	}
	printf("\n");

	//ѭ�����
	int line = 0;
	while (line < 10000)
	{
		printf("д����:%d\n",line);
		line++;
	}
	if(line==10000)
	{
		printf("��offer\n");
	}

	return 0;
}

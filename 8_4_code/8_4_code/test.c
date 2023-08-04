//自学C语言DAY3

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

int main()
{
	//转义字符
	printf("c:\test\test.c");//\和t转变了原来的意思
	printf("c:\\test\\test.c");// \\表示一个斜杠，防止被转义
	printf("\n");
	//C语言转义字符： \? \' \" \\ \a \b \f \n \r \t \v \ddd(ddd表示一到三个8进制数字) \xdd(dd表示两个16进制数字)
	
	printf("%c\n",'\130');//X —— ASCII码值为88
	printf("%c\n", '\101');//A —— ASCII码值为65，8进制为101
	//详见ASCII表
	//尝试：求下列打印的结果
	printf("%d\n", strlen("c:\test\328\test.c"));//注意！ 1、转义字符算一个长度  2、8进制不含数字8
	printf("\n");
	
	//注释
	//int a = 1; //为C++注释风格
	/*
	int b = 1；
	*/  //为C语言注释风格（不支持嵌套注释）

	//选择语句
	int input = 0;//输入的值
	printf("进入广工:>\n");
	printf("要好好学习吗（1/0）？:>\n");
	scanf("%d", &input);
	if (input == 1)
	{
		printf("好offer\n");
	}
	else
	{
		printf("卖红薯\n");
	}
	printf("\n");

	//循环语句
	int line = 0;
	while (line < 10000)
	{
		printf("写代码:%d\n",line);
		line++;
	}
	if(line==10000)
	{
		printf("好offer\n");
	}

	return 0;
}

//自学C语言DAY2

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

int main()
{
	//字符串就是一串字符
	//双引号括起来的一串字符
	"abcdef";

	//字符数组（数组是一组相同类型的元素）
	char arr[] = "hello";
	//字符串在结尾隐藏了一个\0字符
	//\0是字符串结束标志

	char arr1[] = "abc";
	char arr2[] = { 'a','b','c' };

	//打印字符串%s
	printf("%s\n", arr1);
	printf("%s\n", arr2);
	printf("\n");
	//可见字符串结束标志\0重要性
    //求一下字符串长度
	//strlen = string length
	printf("%d\n", strlen(arr1));//打印结果正常
	printf("%d\n", strlen(arr2));//打印结果为随机值
	//结束标志\0不算入长度和内容，但算入元素个数
	printf("\n");

	return 0;
}

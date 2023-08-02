//C语言学习Day1

//写代码
//1.写出主函数(main函数)
//c语言代码从主函数第一行执行

//屏幕打印文字
//printf - 库函数
//printf的使用需要引用头文件(stdio.h)
//"\n"表示换行

#include <stdio.h>

int main()
{
	printf("第一次尝试\n");
	printf("\n");

	//查看数据类型占用空间(sizeof)
	printf("%d\n", sizeof(char));      //字符数据类型
	printf("%d\n", sizeof(short));     //短整型
	printf("%d\n", sizeof(int));       //整型
	printf("%d\n", sizeof(long));      //长整型
	printf("%d\n", sizeof(long long)); //更长的整型
	printf("%d\n", sizeof(float));     //单精度浮点数
	printf("%d\n", sizeof(double));    //双精度浮点数
	printf("\n");

	//变量创建
	int age = 18;
	double weight = 55.6;
	//变量改变
	age = age + 1;
	weight = weight - 10;
	printf("%d\n", age);//%d - 整型
	printf("%lf\n", weight);//%f - float；%lf - double
	printf("\n");

	return 0;
}

//编译+链接+运行
//快捷键Ctrl+F5
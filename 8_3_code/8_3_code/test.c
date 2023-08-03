//C语言自学Day2
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


int main()
{
	int y = 1;//局部变量{}内定义
	printf("%d\n", y);//局部优先
	//全局变量和局部变量不建议名字冲突
	//局部变量所在的作用域：变量所在的局部范围
	printf("\n");

	//求两整数之和
	//scanf函数是输入函数
	
	int a = 0;
	int b = 0;
	int sum = 0;
	scanf("%d %d",&a, &b);
	sum = a + b;
	printf("sum = %d\n", sum);
	printf("\n");
	
	//打印全局变量（先声明）
	//声明全局变量
	extern int x;
	printf("%d\n", x);
	printf("\n");
	{
		int z = 23;
		printf("%d\n", z);
		printf("\n");
		//局部变量生命周期：进局部范围开始，出局部范围结束
	}

	//常量
	
	//1.字面常量
	10;     //整型常量
	3.14;   //浮点型常量
	'a';    //字符常量
	"abcd"; //字符串常量

	//2.const修饰的常变量
	const int num = 88;//num就是常变量，具有常属性（不能被改变），但属于变量

	//3. #define定义的标识符常量(不可改变)
	//定义常量
    #define MAX 9999
	int t = MAX;
	printf("%d\n", t);
	printf("\n");

	//4.枚举常量
	//可以一一列举的常量
	enum Sex
	{
		//这种枚举变量未来可能取值
		MALE,
		FEMALE,
		SECRET
	};
	//枚举常量默认值由0开始，可以赋初值
	printf("%d\n", MALE);
	printf("%d\n", FEMALE);
	printf("%d\n", MALE);
	printf("%d\n");
	return 0;
}	
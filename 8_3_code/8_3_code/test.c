//C������ѧDay2
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


int main()
{
	int y = 1;//�ֲ�����{}�ڶ���
	printf("%d\n", y);//�ֲ�����
	//ȫ�ֱ����;ֲ��������������ֳ�ͻ
	//�ֲ��������ڵ������򣺱������ڵľֲ���Χ
	printf("\n");

	//��������֮��
	//scanf���������뺯��
	
	int a = 0;
	int b = 0;
	int sum = 0;
	scanf("%d %d",&a, &b);
	sum = a + b;
	printf("sum = %d\n", sum);
	printf("\n");
	
	//��ӡȫ�ֱ�������������
	//����ȫ�ֱ���
	extern int x;
	printf("%d\n", x);
	printf("\n");
	{
		int z = 23;
		printf("%d\n", z);
		printf("\n");
		//�ֲ������������ڣ����ֲ���Χ��ʼ�����ֲ���Χ����
	}

	//����
	
	//1.���泣��
	10;     //���ͳ���
	3.14;   //�����ͳ���
	'a';    //�ַ�����
	"abcd"; //�ַ�������

	//2.const���εĳ�����
	const int num = 88;//num���ǳ����������г����ԣ����ܱ��ı䣩�������ڱ���

	//3. #define����ı�ʶ������(���ɸı�)
	//���峣��
    #define MAX 9999
	int t = MAX;
	printf("%d\n", t);
	printf("\n");

	//4.ö�ٳ���
	//����һһ�оٵĳ���
	enum Sex
	{
		//����ö�ٱ���δ������ȡֵ
		MALE,
		FEMALE,
		SECRET
	};
	//ö�ٳ���Ĭ��ֵ��0��ʼ�����Ը���ֵ
	printf("%d\n", MALE);
	printf("%d\n", FEMALE);
	printf("%d\n", MALE);
	printf("%d\n");
	return 0;
}	
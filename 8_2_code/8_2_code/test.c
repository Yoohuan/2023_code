//C����ѧϰDay1

//д����
//1.д��������(main����)
//c���Դ������������һ��ִ��

//��Ļ��ӡ����
//printf - �⺯��
//printf��ʹ����Ҫ����ͷ�ļ�(stdio.h)
//"\n"��ʾ����

#include <stdio.h>

int main()
{
	printf("��һ�γ���\n");
	printf("\n");

	//�鿴��������ռ�ÿռ�(sizeof)
	printf("%d\n", sizeof(char));      //�ַ���������
	printf("%d\n", sizeof(short));     //������
	printf("%d\n", sizeof(int));       //����
	printf("%d\n", sizeof(long));      //������
	printf("%d\n", sizeof(long long)); //����������
	printf("%d\n", sizeof(float));     //�����ȸ�����
	printf("%d\n", sizeof(double));    //˫���ȸ�����
	printf("\n");

	//��������
	int age = 18;
	double weight = 55.6;
	//�����ı�
	age = age + 1;
	weight = weight - 10;
	printf("%d\n", age);//%d - ����
	printf("%lf\n", weight);//%f - float��%lf - double
	printf("\n");

	return 0;
}

//����+����+����
//��ݼ�Ctrl+F5
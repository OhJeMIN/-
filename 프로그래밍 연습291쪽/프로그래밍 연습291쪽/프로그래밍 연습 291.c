#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	double BMI;
	double weight=0 , height=0 ;

	
	printf("�����Կ� ������ �Է��Ͻÿ�.");
	scanf("%lf %lf", &weight, &height);
	BMI = weight / ((height / 100) * (height / 100));
	if (BMI < 18.5)
	{
		printf("��ü���Դϴ�.");
	}
	else if (BMI >= 18.5 && BMI < 23)
	{
		printf("�����Դϴ�.");
	}
	else if (BMI >= 23 && BMI < 25)
	{
		printf("��ü���Դϴ�.");
	}
	else if (BMI >= 25 && BMI < 30)
	{
		printf("���Դϴ�.");
	}
	else if (BMI >= 30 && BMI < 35)
	{
		printf("�� ����Դϴ�.");
	}
	else
	{
		printf(" �ʰ� ���Դϴ�.");
	}
	return 0;
}

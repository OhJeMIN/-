#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	double a = 0, b = 0;

	printf("�� �Ǽ��� �Է��Ͻÿ� :");
	scanf("%lf %lf", &a, &b); //�ʷ����� ���� 6031�� ���� �� �ִ�.

	int exp;
	printf("�������� ��ȣ ���� 1(+),2(-),3(*),4(/) :");
	scanf("%d", &exp);

	switch (exp)
	{
	case(1):
		
		printf("%lf + %lf = %.2lf", a, b, a + b);
		break;
	case(2):

		printf("%lf - %lf = %.2lf", a, b, a - b);
		break;
	case(3):

		printf("%lf * %lf = %.2lf", a, b, a * b);
		break;
	case(4):

		printf("%lf / %lf = %.2lf", a, b, a / b);
		break;

	default:

		printf("��ȣ�� �� �� �Է��ϼ̽��ϴ�.");
		break;

	}
	
	return 0;
}
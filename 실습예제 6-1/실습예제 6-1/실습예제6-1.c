#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	double temperature;

	printf("���� �µ��� �Է��Ͻÿ� :");
	scanf("%lf", &temperature);

	if (temperature >= 32)
	{
		printf("���� ���Ǻ��� �߷��մϴ�.\n");
		printf("�ǰ��� �����ϼ���.\n");
	}
	printf("���� �µ��� ���� %lf�Դϴ�." ,temperature);

	return 0;
}
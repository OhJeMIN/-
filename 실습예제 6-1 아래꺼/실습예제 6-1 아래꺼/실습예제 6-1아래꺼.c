#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	double score;

	printf("������ �Է��Ͻÿ�:");
	scanf("%lf", &score);

	if (score >= 70)
	{
		printf("�հ��Դϴ�. ����ϼ̽��ϴ�");
	}
	if (score < 70)
	{
		printf("���հ��Դϴ�. �����ϼ̽��ϴ�.");
	}
	return 0;
}
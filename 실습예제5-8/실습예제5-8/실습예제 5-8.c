#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a =0, b=0;

	printf("�� ������ �Է��Ͻÿ�.");
	scanf("%d , %d", &a, &b); // ���� �Է��Ҷ� 8,-9 ó�� �Ȱ��� �Է��ؾ� ��
	printf("�� ���� ������ ū ����? :%d\n", (a > b) ? a : b);
	printf("�� ���� ������ ���� ����? :%d\n", (a < b) ? a : b);
	printf("������? :%d\n", (a > 0) ? a : -a);
	printf("������? :%d\n", (b > 0) ? b : -b);

	((a % 2 == 0) ? printf("¦��") : printf("Ȧ��"));

	return 0;
}
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int a;

	printf("������ �Է��Ͻÿ�:");
	scanf("%d", &a);

	if (a % 2 == 0)

		printf("¦���Դϴ�.\n");

	else
		printf("Ȧ���Դϴ�.\n");

	(a % 2 == 0) ? printf("¦���Դϴ�.") : printf("Ȧ���Դϴ�");

	return 0;
}
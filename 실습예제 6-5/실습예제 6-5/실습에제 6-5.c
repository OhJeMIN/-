#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int type, score;

	printf("�������� ������ �Է��ϼ��� (1������ = 1),(2������ = 2)");
	scanf("%d", &type);

	if (type == 1)
	{
		printf("�ʱ������ ���� �Է� :");
		scanf("%d", &score);
		if (score >= 70)

			printf("1������ �հ��Դϴ�.");
		else
		
			printf("1������ ���հ��Դϴ�.");
		
	}
	else if (type == 2)
	{
		printf("�ʱ������ ���� �Է� :");
		scanf("%d", &score);
		if (score >= 60)

			printf("2������ �հ��Դϴ�.");
		else

			printf("2������ ���հ��Դϴ�.");
	}

		return 0;
}
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int month;

	printf("�⵵�� ��(month)�� �Է� :");
	scanf("%d", &month);

	//345 ��, 678 ����,9 10 11 ���� 12 1 2 �ܿ�
	switch (month)
	{
	case 3: case 4: case 5:
		printf("%d���� ���Դϴ�", month);
		break;

	case 6: case 7: case 8: 
		printf("%d���� �����Դϴ�", month);
		break;
	case 9: case 10: case 11:
		printf("%d���� �����Դϴ�", month);
		break;
	case 12: case 1: case 2:
		printf("%d���� �ܿ��Դϴ�", month);
		break;
	
	default:
		printf("��(month)�� �߸� �Է��ϼ̽��ϴ�.");
		break;

	}
	return 0;
}
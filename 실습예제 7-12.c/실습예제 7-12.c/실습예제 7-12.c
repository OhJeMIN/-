#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int i, max , sum;

	printf("1�������� ���������� ���� ���� ���� ���� �ϳ� �Է� :");
	scanf("%d", &max);

	for (i = 1, sum = 0; i <= max ; i++)
	{
		sum += i;
	}
	printf("1���� %d������ �� :%d\n", max, sum);
	i = 1; sum = 0;
	while (i <= max) 
	{
		sum += i;
		i++;
	}
	printf("1���� %d������ �� : %d", max, sum);

	return 0;

}
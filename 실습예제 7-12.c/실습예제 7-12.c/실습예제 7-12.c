#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int i, max , sum;

	printf("1에서부터 정수까지의 합을 구할 양의 정수 하나 입력 :");
	scanf("%d", &max);

	for (i = 1, sum = 0; i <= max ; i++)
	{
		sum += i;
	}
	printf("1에서 %d까지의 합 :%d\n", max, sum);
	i = 1; sum = 0;
	while (i <= max) 
	{
		sum += i;
		i++;
	}
	printf("1에서 %d까지의 합 : %d", max, sum);

	return 0;

}
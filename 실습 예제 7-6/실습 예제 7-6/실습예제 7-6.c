#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int count = 0;

		do
		{
			printf("정수 또는 0(종료)를 입력:\n");
			scanf("%d", &count);
		} 
		while (count != 0);
			printf("종료합니다.");

			return 0;
}
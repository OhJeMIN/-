#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int type, score;

	printf("운전면허 종류를 입력하세요 (1종면허 = 1),(2종면허 = 2)");
	scanf("%d", &type);

	if (type == 1)
	{
		printf("필기시험의 점수 입력 :");
		scanf("%d", &score);
		if (score >= 70)

			printf("1종면허 합격입니다.");
		else
		
			printf("1종면허 불합격입니다.");
		
	}
	else if (type == 2)
	{
		printf("필기시험의 점수 입력 :");
		scanf("%d", &score);
		if (score >= 60)

			printf("2종면허 합격입니다.");
		else

			printf("2종면허 불합격입니다.");
	}

		return 0;
}
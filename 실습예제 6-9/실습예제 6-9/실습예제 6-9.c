#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int score,a;

	printf("점수 입력 :");
	scanf("%d", &score);
	/*
	if(score <0 ll score >100){
	printf("점수를 잘못 입력하셨습니다.");
	return 0;
	*/
	
	switch (score / 10)
	{
	case 9: case 10:
		printf("점수가 %d 점으로 성적이 A입니다.", score);
		break;
	 case 8:
		printf("점수가 %d 점으로 성적이 B입니다.", score);
		break;
	 case 7:
		printf("점수가 %d 점으로 성적이 C입니다.", score);
		break;
	 case 6 :
		printf("점수가 %d 점으로 성적이 D입니다.", score);
		break;
	 default:
		 printf("점수가 %d 점으로 성적이 F입니다.", score);
		 break;
		
	}
	return 0;
}
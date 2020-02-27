#include <stdio.h>

int main(void)
{
	int math = 100;
	int english = 95;
	int science = 80;

	int total = math + english + science;

	int average = total / 3;

	short s = -32768 - 1;


	printf("수학점수 : %d\n", math);
	printf("영어점수 : %d\n", english);
	printf("과학점수 : %d\n", science);
	printf("총점점수 : %d\n", total);
	printf("평균점수 : %d\n", average);
	printf("%d\n", s);
}
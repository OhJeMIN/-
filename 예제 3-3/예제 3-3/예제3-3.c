#include <stdio.h>

int main(void)
{
	int math = 100;
	int english = 95;
	int science = 80;

	int total = math + english + science;

	int average = total / 3;

	short s = -32768 - 1;


	printf("�������� : %d\n", math);
	printf("�������� : %d\n", english);
	printf("�������� : %d\n", science);
	printf("�������� : %d\n", total);
	printf("������� : %d\n", average);
	printf("%d\n", s);
}
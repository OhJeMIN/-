#include <stdio.h>

#define Message "프로그램언어의 학습은 일반언어의 학습과 \
							같이 반복 학습이 중요하다."

#define PI 3.141592
#define square(x)  ((x) * (x))
#define cube(x) (square(x) * (x))
#define multi(x,y) ((x) * (y))

int main(void)
{
	double radius = 5.2;

		printf("원의 넓이는 : %.2lf입니다\n", square(radius) * PI);
		printf("어떤 것의 세제곱은 : %.2lf입니다\n", cube(radius));
		printf("%f 와 %f 의 곱은 %.2lf입니다\n", 3.2, 4.3, multi(3.2, 4.3));

		return 0;
}
#include <stdio.h>

#define Message "���α׷������ �н��� �Ϲݾ���� �н��� \
							���� �ݺ� �н��� �߿��ϴ�."

#define PI 3.141592
#define square(x)  ((x) * (x))
#define cube(x) (square(x) * (x))
#define multi(x,y) ((x) * (y))

int main(void)
{
	double radius = 5.2;

		printf("���� ���̴� : %.2lf�Դϴ�\n", square(radius) * PI);
		printf("� ���� �������� : %.2lf�Դϴ�\n", cube(radius));
		printf("%f �� %f �� ���� %.2lf�Դϴ�\n", 3.2, 4.3, multi(3.2, 4.3));

		return 0;
}
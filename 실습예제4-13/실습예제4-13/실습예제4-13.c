#include <stdio.h>

int main(void)
{
	char a = "\$"; //�׳� a�� �ʱ�ȭ �ѵ� ������
	
	printf("�����ϳ� �Է�:");
	a = getchar();
	putchar(a); putchar('\n');

	return 0;
}
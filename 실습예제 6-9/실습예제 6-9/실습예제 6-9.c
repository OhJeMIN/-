#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int score,a;

	printf("���� �Է� :");
	scanf("%d", &score);
	/*
	if(score <0 ll score >100){
	printf("������ �߸� �Է��ϼ̽��ϴ�.");
	return 0;
	*/
	
	switch (score / 10)
	{
	case 9: case 10:
		printf("������ %d ������ ������ A�Դϴ�.", score);
		break;
	 case 8:
		printf("������ %d ������ ������ B�Դϴ�.", score);
		break;
	 case 7:
		printf("������ %d ������ ������ C�Դϴ�.", score);
		break;
	 case 6 :
		printf("������ %d ������ ������ D�Դϴ�.", score);
		break;
	 default:
		 printf("������ %d ������ ������ F�Դϴ�.", score);
		 break;
		
	}
	return 0;
}
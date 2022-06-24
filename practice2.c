#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int cm, fit;
	double inch;

	printf("키를 입력하시오(cm):");
	scanf("%d", &cm);

	inch = cm / 2.54;
	fit = inch / 12;

	printf("%dcm는 %d피트 %lf인치입니다.\n", cm, fit, inch);
	return 0;
}
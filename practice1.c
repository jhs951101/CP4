#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a, b, c, max;

	printf("3개의 정수를 입력하시오:");
	scanf("%d%d%d", &a, &b, &c);

	max = a > b ? a : b;
	max = c > max ? c : max;

	printf("최대값:%d\n", max);
	return 0;
}
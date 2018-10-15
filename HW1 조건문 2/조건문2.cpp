#include <stdio.h>
int main()
{
	int a, b;
	printf("한개의 정수를 입력하시오:");
	scanf_s("%d", &a);



	b = a % 2;

	if (b == 0)
		printf("결과값은 even");
	else
		printf("결과값은 odd");

	return 0;
}
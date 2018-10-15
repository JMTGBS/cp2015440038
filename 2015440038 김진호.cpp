#include <stdio.h>
int main() {
	int A, B, C, D, E,n;
	printf("한개의 정수를 입력하시오:");
	scanf_s("%d", &n);

	
	if (0 <= n and n <= 19)
		printf("결과값은 : E\n");
	else if (20 <= n and n <= 39)

		printf("결과값은 : D\n");
	else if (40 <= n and n <= 59)
		printf("결과값은 : C\n");

	else if (60 <= n and n <= 79)
		printf("결과값은 : B\n");

	else if (80 <= n and n <= 100)
		 printf("결과값은 : A\n");

	return 0;
		




}
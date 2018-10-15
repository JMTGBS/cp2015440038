#include <stdio.h>

int main()
{
	int a, b, c;
	int large;
	printf("세 정수를 입력하시오:");
	scanf_s("%d %d %d", &a, &b, &c);
	
	
	large = a < b ? (b < c ? c : b) : (a < c ? c : a);
	

	printf("큰 수는 %d 입니다.\n", large);
	return 0;
}
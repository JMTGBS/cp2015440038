#include <stdio.h>

int main() {
	int x, y, z, w;

	printf("두자리 정수를 입력하시오:");

	scanf_s("%d", &w);


	
		x = w / 10;
		y = w % 10;
		z = (10 * y) + x;
		
		
		
		if (w >= 10)
		printf("출력은 %d 입니다.", z);
	
	
		return 0;




}
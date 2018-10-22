#include <stdio.h>
#include<windows.h>
int main() {
	int x=6, answer;

	while (x <= 100 && x > 1) {
		printf("숫자 하나를 정하시오:");
		scanf_s("%d", &x);
		
		answer = 50;

		if (x < answer)
			printf("입력하신 숫자보다 큽니다");
		else if (x > answer)
			printf("입력하신 숫자보단 작아요~");
		else if (x == answer) {
			printf("맞췄으니 Game over");
				break;
		}
	}
	
	system("pause");
	return 0;
}
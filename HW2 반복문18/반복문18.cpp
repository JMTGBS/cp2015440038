#include <stdio.h>
#include<windows.h>
int main() {
	int sum = 0, i;

	for (i = 0; i <= 100; i++) {
		if (i % 5 == 0)
			sum += i;
	}
	printf("5의 배수의 합은 %d 이다", sum);

	system("pause");
	return 0;

}
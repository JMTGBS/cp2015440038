#include <stdio.h>
#include<windows.h>
int main() {

int i, j, n, sum = 0;
	printf("정수를 입력하시오: ");
	scanf_s("%d",&n);
	for (i = 1; i <= n; i++) {
		for (j = 2; j <= i; j++)
			if (i%j == 0)
				break;
		if (i == j)
			sum += i;

	}
	printf(" %d ", sum);

	system("pause");
	return 0;
}
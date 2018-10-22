#include <stdio.h>
#include <windows.h>
int main() {

	int  n, maxnum;

	printf("정수를 입력하시오\n");
	scanf_s("%d", &n);

	while (1) {
		{    maxnum = n;
		scanf_s("%d", &n);
		if (n > maxnum) {
			continue;
		}
		if (n == 0)
			break;
		}
	}
	printf("입력받은 데이타중 가장큰수는 : %d\n", maxnum);
	system("pause");
	return 0;
}
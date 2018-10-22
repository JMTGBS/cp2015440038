#include <stdio.h>
#include <windows.h>
int main() {
	int n, x ;
	
	while (1) {
		printf("정수를 입력하시오 : ");
		scanf_s("%d",&n);
		for (x = 2; x < n; x++) {

			if (n%x == 0)
				printf(" %d ", x);
			continue;
		}
	}
	
	system("pause");
	return 0;



}
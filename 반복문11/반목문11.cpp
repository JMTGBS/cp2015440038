#include <stdio.h>
#include <windows.h>
int main() {

	int n = 1, x;
	while (1) {
		printf("������ �Է��Ͻÿ� :");
		scanf_s("%d", &n);
		for (x = 2; x < n; x++)
			if (n%x == 0) {
				printf(" %d ", x);
				continue;
			}
		if (n == 0)
			break;
	}
	system("pause");
	return 0;


}
#include<stdio.h>
#include<windows.h>
int main() {
	int n,sum=0;
	
	while (1) {
		printf("put num");
		scanf_s("%d", &n);
		if (n > 7)
			break;

		else printf("error");
		continue;

	}
	for (int i = 7; i <= n; i++)
		sum += i;
	printf(" %d ", sum);

	system("pause");
	return 0;

}
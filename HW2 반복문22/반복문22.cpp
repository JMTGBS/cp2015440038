#include <stdio.h>
#include <windows.h>
int main() {

	int  n, maxnum;

	printf("������ �Է��Ͻÿ�\n");
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
	printf("�Է¹��� ����Ÿ�� ����ū���� : %d\n", maxnum);
	system("pause");
	return 0;
}
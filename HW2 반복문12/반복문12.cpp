#include <stdio.h>
#include <windows.h>
int main() {

	int  data, maxnum;
	
	printf("������ �Է��Ͻÿ�\n");
	scanf_s("%d", &data);
	
	while (1) {
		{    maxnum = data;
			scanf_s("%d", &data);
			if (data > maxnum) {
				continue;
			}
			if (data == 0)
				break;
		}
	}
	printf("�Է¹��� ����Ÿ�� ����ū���� : %d\n", maxnum);
system("pause");
	return 0;
}
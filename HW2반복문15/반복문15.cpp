#include <stdio.h>
#include<windows.h>
int main() {
	int x=6, answer;

	while (x <= 100 && x > 1) {
		printf("���� �ϳ��� ���Ͻÿ�:");
		scanf_s("%d", &x);
		
		answer = 50;

		if (x < answer)
			printf("�Է��Ͻ� ���ں��� Ů�ϴ�");
		else if (x > answer)
			printf("�Է��Ͻ� ���ں��� �۾ƿ�~");
		else if (x == answer) {
			printf("�������� Game over");
				break;
		}
	}
	
	system("pause");
	return 0;
}
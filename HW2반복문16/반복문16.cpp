#include <stdio.h>
#include<windows.h>
int main() {
	int n;
		int i = 1, length = 0;
	printf("������ �Է��Ͻÿ�");
	scanf_s("%d", &n);
	while (n > i)
	{      
		
		i *= 10;
		length++;

	}
	printf("%d �ڸ������Դϴ�", length);
	

	system("pause");
	return 0;



}
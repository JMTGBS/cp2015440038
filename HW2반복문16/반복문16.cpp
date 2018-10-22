#include <stdio.h>
#include<windows.h>
int main() {
	int n;
		int i = 1, length = 0;
	printf("정수를 입력하시오");
	scanf_s("%d", &n);
	while (n > i)
	{      
		
		i *= 10;
		length++;

	}
	printf("%d 자리숫자입니다", length);
	

	system("pause");
	return 0;



}
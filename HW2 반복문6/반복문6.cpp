#include <stdio.h>
#include <windows.h>
int main() {
	int n;
	
	
	while (1) {
		printf("정수를 입력하세요:");
		scanf_s("%d",&n);
		
		
		if (n <= 0) {
			printf("error.", n);
			continue;
		}
		if (n > 0)
		n = 2 * n;
		printf("%d ", n);
		}
	 
		
		
	
		
	


	system("pause");
	return 0;

}
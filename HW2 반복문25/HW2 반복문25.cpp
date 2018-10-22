#include <stdio.h>
#include <windows.h>

int main() {
	int x, y,i;
	int line;

	line = 10;

	for (x = 0; x < line; x++) {
		for (y = 0; y < line- (2*x)+1; y++)
		{	
			printf("*");
			
		}
		for (i = 5; i > 0; i--) {
			printf("%d", i);
		}
		for (i = 0; i <= 5; i++) {
			printf("%d", i);
		}

		printf("\n");
	}

	system("pause");
}

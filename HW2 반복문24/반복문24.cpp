#include <stdio.h>
#include <windows.h>
void star(int a);

	int main(void) {
		int i=0;

		star(i);
			star(i);
			star(i);

			return 0;
	}

	void star(int a) {
		int i,n=1;
		printf("정수입력");
		scanf_s("%d",&n);
		while (1) {
			for (i = 1; i <= n; i++) {
				i = (2 * i) - 1;
				continue;
			}
		}
			printf("*");
		printf("\n");
	
	
	
	}


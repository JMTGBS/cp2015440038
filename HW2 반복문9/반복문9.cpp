#include <stdio.h>
#include <windows.h>
int main(void){



	int i=0, a, x;


	
	while (1) {
		printf("원하는 구구단을 입력:");
		scanf_s("%d",&i);
		
			
			if (i <= 9)
				break;
			
			if (i > 9) {
				printf("잘못입력 하였습니다. 다시입력해주세요 :\n");
				continue;
			}
			
		
														   
		
		
		
	}
	for (a = 1; a <= 9; a++) {
		x = i * a;

		printf("%d*%d=%d\n", i, a, i*a);
	}
	
	system("pause");
	return 0;

	}
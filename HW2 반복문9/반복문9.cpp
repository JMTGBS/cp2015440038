#include <stdio.h>
#include <windows.h>
int main(void){



	int i=0, a, x;


	
	while (1) {
		printf("���ϴ� �������� �Է�:");
		scanf_s("%d",&i);
		
			
			if (i <= 9)
				break;
			
			if (i > 9) {
				printf("�߸��Է� �Ͽ����ϴ�. �ٽ��Է����ּ��� :\n");
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
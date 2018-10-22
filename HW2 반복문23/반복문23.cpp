#include<stdio.h>
#include <windows.h>
int main() {
		int x,y;
		


		for (x = 0; x < 1; x++) {
			for (y = 0; y <= 6; y++) {
				if (y == 5) 
					printf(" ");
				else
					printf("*");
				}
			printf("\n");
			}
		for (x = 1; x < 2; x++) {
				for (y = 0; y <= 6; y++) {
					if (y == 3)
						printf(" ");
					else
						printf("*");
				}
				printf("\n");
			}
		for (x = 2; x < 3; x++) {
			for (y = 0; y <= 6; y++) {
				if (y == 1)
					printf(" ");
				else
					printf("*");
			}
			printf("\n");
		}
				
			
		
			
		
	


	system("pause");
	return 0;
}
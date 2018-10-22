#include <stdio.h>
#include<windows.h>
int main() {

	int i, j, sum=0;
	for (i = 1; i <= 100; i++) {
		for (j = 2; j <= i; j++)
			if (i%j == 0)
				break;
		if (i == j)
			printf(" %d ", i);
			
	}
	

	system("pause");
	return 0;
}
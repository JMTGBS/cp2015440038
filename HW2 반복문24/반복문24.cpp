#include <stdio.h>
#include <windows.h>

int main() {
	int x, y;
	int line;

	printf("put num");
	scanf_s("%d", &line);

	for (x = 0; x < line; x++) {
		for (y = 0; y <= x; y++)
		{
			printf("*");
		}
		printf("\n");
	}
}

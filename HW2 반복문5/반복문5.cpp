#include <stdio.h>
#include <windows.h>
int main() {

	int sum = 0, i = 0;

	do
	{

	if (i % 3 == 0)
			sum += i;
			i++;


	} while (i <= 100);
	printf("гую╨ %d \n", sum);

	system("pause");
	return 0;

}
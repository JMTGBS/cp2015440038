#include <stdio.h>
#include <windows.h>
int main()

{

	int i, a, x;


	printf("���ϴ� �������� �Է�:");

	scanf_s("%d", &i);

	for(a = 1; a<= 9; a++)

	{
		x = i * a;
		
		printf("%d*%d=%d\n", i, a, i*a);

	
	}
	system("pause");
	return 0;

}

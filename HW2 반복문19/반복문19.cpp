#include <stdio.h>
#include<windows.h>
int main() {
	int n, x,i;
	printf("정수를 입력하시오 :");
	scanf_s("%d", &n);
	x = 0;
	for(i = 2; i<n; i++)
	{
		
		if (n%i == 0) 
		{   
			x++;
			break;
		}
			
			
	}
	if (x!=0)
		printf("소수가 아니다");
	else
	printf("소수이다.");

	system("pause");
	return 0;


}
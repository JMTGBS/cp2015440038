# include <stdio.h>
int main(void)
{



	int a,b,c;

	printf("두개의 정수를 입력하시오:");
	scanf("%d %d", &a,&b);

	c = a / b;

 if(c>1)
	printf("결과값: %d", a);
 else
	printf("결과값: %d",b);
 
return 0;
}
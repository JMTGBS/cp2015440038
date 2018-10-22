#include <stdio.h>
#include <windows.h>
int main() {

	int  data, maxnum;
	
	printf("정수를 입력하시오\n");
	scanf_s("%d", &data);
	
	while (1) {
		{    maxnum = data;
			scanf_s("%d", &data);
			if (data > maxnum) {
				continue;
			}
			if (data == 0)
				break;
		}
	}
	printf("입력받은 데이타중 가장큰수는 : %d\n", maxnum);
system("pause");
	return 0;
}
#include <stdio.h>
#include <windows.h>

int main() {
	int month, lastdate, date, sum;
	printf("�� ���� �Է��Ͻÿ� :");
	scanf_s("%d %d", &month,&date);
	
	
		if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
		{
			lastdate = 31;
		}
		else if (month == 4 || month == 6 || month == 9 || month == 11) {

			lastdate = 30;
		}
		else if (month == 2) {
			lastdate = 28;
			printf("%d �� ", month);
		}
		
		

		else if (month > 1) {
			for(int i =1; i <= 100; i++)
			sum = date + i;
			printf("%d �� ", sum);
		}
			else if (month == 1)
				printf("%d��", date);

			
		
		
			


	system("pause");
	return 0;

}


#include <stdio.h>
	int main(){
		int a = 10;		// 1. a �� �ʱ�ȭ (a �ȿ� �ּҵ��� �ִ�.)
		int* ptr;		// 2.	ptr ���� ����
		ptr = &a;		// 3. ptr�� ���� a�� �ּ�(���� a�� ���� �Ҵ��� �޸��� ù��° �ּ�)�� ��. , & : Ampersand = "address of a"
		*ptr = 20;		// 4. *ptr; : "Data of" ptr (�����ͺ��� ptrd�� ����Ű�� ���� ������) = 20 ;   
		printf("a  = %d \n",a);

		return 0 ;
	}
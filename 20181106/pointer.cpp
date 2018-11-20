#include <stdio.h>
	int main(){
		int a = 10;		// 1. a 값 초기화 (a 안에 주소들이 있다.)
		int* ptr;		// 2.	ptr 변수 선언
		ptr = &a;		// 3. ptr에 변수 a의 주소(변수 a를 위해 할당한 메모리의 첫번째 주소)가 들어감. , & : Ampersand = "address of a"
		*ptr = 20;		// 4. *ptr; : "Data of" ptr (포인터변수 ptrd이 가르키는 곳의 데이터) = 20 ;   
		printf("a  = %d \n",a);

		return 0 ;
	}
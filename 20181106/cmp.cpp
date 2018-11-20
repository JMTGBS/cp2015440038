#include <stdio.h>
void test (int a) {
	a = 100;
}
void testPointer(int*ptr){
	*ptr = 1000;
}
int main(){
	int a= 10;		// main 에서 만든 변수 a (여기는 노터치!)
	test(a);		// #1 매개변수를 위한 공간 생성  #2 매개변수 값 복사
	printf("a = %d\n",a); 


	// 포인터를 매개변수값으로 전달


	testPointer(&a); // 매개변수 값이 a의 주소이다. (메인의 변수값을 바꿀 수 있다. ptr 이 원하는 곳으로 access 할 수 있다.)
	printf("a = %d\n",a);  
	return 0;
}
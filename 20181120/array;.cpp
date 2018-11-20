#include <stdio.h>
//printArray()
//입력 : 배열
//출력 : 없음
//부수효과 : 화면에 배열의 값을 출력
// void printArray(int arr[], int len){
void printArray(int* arr, int len){ // 앞으로 배열을 함수에 전달할 경우 이 문법을 주로 사용한다.
	for(int index = 0; index<len; index++){
		printf("array[%d] = %d \n ", index, arr[index]);
	}
}

int main(){
	int a[3] = {10, 20, 30};		//배열의 선언, 배열이름 : a, 배열의 길이 : 3	
	int* ptr;
	// 배열의 이름만 사용하면 그 배열 첫 요소의 포인터값이 된다. ex) a or b or c etc...
	printArray(a,3);

	//ptr = a;		// ptr = &a[0] => 첫번째 재료의 주소;
	//printf("a[0] = %d\n", *ptr);
	//printf("a[0] = %d\n", a[0]);
	//// 포인터변수 이름을 배열 이름으로 사용할 수 있다. 
	//printf("a[0] = %d\n", ptr[0]);
	//printf("a[0] = %d\n", ptr[1]);
	//printf("a[0] = %d\n", ptr[2]);
	//printArray(a,3);
	//
	//a = ptr; //error WHY?  배열의 이름(a)는 값만 가지고 있다. 즉, rvalue 이다. error :  식이 수정할 수 있는 lvalue여야 합니다. 
 //
	//return 0;
}
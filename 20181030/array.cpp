#include <stdio.h>
//함수 printArray
//입력 : 배열
//출력 : 없음
//부수효과 : 화면에 모든 요소를 출력
void printArray(int arr[], int length) {
	int count = 0;
	while(count < length){ // (배열이름[], 배열길이)
		printf("a[%d] = %d \n", count, arr[count]);
		count++;
	}
}
int main(){
	int len =4;;
	// 배열선언
	//1. 배열의 이름 : a
	//2. 요소의 자료형 : int
	//3. 배열의 길이 : 4
	/*int a[4]; 
	a[0] = 20;
	a[1] = 200;
	a[2] = 2000;
	a[3] = 20000;
	int count = 0;*/
	int a[4] = {2, 20, 200, 2000}; //배열 한줄에 초기화 방법
	printArray(a,len); //배열을 매개변수로 (배열의 이름 a, 배열의 길이len)
	printf("%d\n", a[100]);
	int arr[] = {3,30,300}; //길이 3의 배열 생성
	int count =0;
	while(count<len){
		printf("a[%d] = %d\n" , count, a[count]);
		count++;
	}

	return 0;
	
}
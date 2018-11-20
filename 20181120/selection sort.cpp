#include <stdio.h>

void printArray(int* arr, int len){ // 앞으로 배열을 함수에 전달할 경우 이 문법을 주로 사용한다.
	for(int index = 0; index<len; index++){
		printf("array[%d] = %d \n ", index, arr[index]);
	}
}
/* ... */
void printArray(int* arr, int len){ ..... }
// 함수 : findMinIndex()
//입력 : 배열(배열이름,배열길이)
//출력 : 최소값의 인덱스
int findMinIndex(int* arr, int length){
	int minIndex;

	return minIndex;

}


// 함수 : findMin()
//입력 : 배열(배열이름,배열길이)
//출력 : 배열 최소값
int findMin(int* arr, int length){
	int min=arr[0];
	for ( int count = 1; count<length; count++){
		if (min > arr[count])
			min = arr[count];
	}
	return min;
}

int main() {
	int a[] = {30,35,27,15,40};

	printf("minimum value of the array is %d\n", findMin(a, 5);

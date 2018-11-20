#include <stdio.h>
void printArray(int* arr, int len)	{
}
// 함수 : findMinIndex()
//입력 : 배열(배열이름,배열길이)
//출력 : 최소값의 인덱스
int findMinIndex(int* arr, int length){
	int minIndex = 0;
	for ( int count = 1; count<length; count++){
		if (arr[minIndex] > arr[count])
			minIndex = count;
	}
	return minIndex;
	
	

}
//함수 : swapElement()
//입력 : 배열, 두개의 인덱스
//출력 : 없음 
//부수효과 : 배열의 두 인덱스 element가 바뀐다.
void swapElement(int* arr, int i, int j){
	int temp; 
	temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}
// 함수 : selectionSort()
// 입력 : 배열 
// 출력 : 없음
// 부수효과 : 배열이 정렬됨
void selectionSort(int* arr, int length ){
	int a[] = {10,20,30,5,4};
	findMinIndex(0 , 5);
	swapElement(a, 0, 5);
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
	int a[] = {30,35,27,15,4};

	printf("minimum value of the array is %d\n", findMin(a, 5));
	printf("The index of the minimum value is %d\n",findMinIndex(a,5));
	swapElement(a, 0, 5);
	selectionSort(a, 5);
	printArray(a,5);
}

// HINT findmin argument 가 하나더 필요하다. 변수하나가 더 필요하다.
#include <stdio.h>

void printArray(int* arr, int len){ // ������ �迭�� �Լ��� ������ ��� �� ������ �ַ� ����Ѵ�.
	for(int index = 0; index<len; index++){
		printf("array[%d] = %d \n ", index, arr[index]);
	}
}
/* ... */
void printArray(int* arr, int len){ ..... }
// �Լ� : findMinIndex()
//�Է� : �迭(�迭�̸�,�迭����)
//��� : �ּҰ��� �ε���
int findMinIndex(int* arr, int length){
	int minIndex;

	return minIndex;

}


// �Լ� : findMin()
//�Է� : �迭(�迭�̸�,�迭����)
//��� : �迭 �ּҰ�
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

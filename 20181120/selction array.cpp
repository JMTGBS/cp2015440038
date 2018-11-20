#include <stdio.h>
void printArray(int* arr, int len)	{
}
// �Լ� : findMinIndex()
//�Է� : �迭(�迭�̸�,�迭����)
//��� : �ּҰ��� �ε���
int findMinIndex(int* arr, int length){
	int minIndex = 0;
	for ( int count = 1; count<length; count++){
		if (arr[minIndex] > arr[count])
			minIndex = count;
	}
	return minIndex;
	
	

}
//�Լ� : swapElement()
//�Է� : �迭, �ΰ��� �ε���
//��� : ���� 
//�μ�ȿ�� : �迭�� �� �ε��� element�� �ٲ��.
void swapElement(int* arr, int i, int j){
	int temp; 
	temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}
// �Լ� : selectionSort()
// �Է� : �迭 
// ��� : ����
// �μ�ȿ�� : �迭�� ���ĵ�
void selectionSort(int* arr, int length ){
	int a[] = {10,20,30,5,4};
	findMinIndex(0 , 5);
	swapElement(a, 0, 5);
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
	int a[] = {30,35,27,15,4};

	printf("minimum value of the array is %d\n", findMin(a, 5));
	printf("The index of the minimum value is %d\n",findMinIndex(a,5));
	swapElement(a, 0, 5);
	selectionSort(a, 5);
	printArray(a,5);
}

// HINT findmin argument �� �ϳ��� �ʿ��ϴ�. �����ϳ��� �� �ʿ��ϴ�.
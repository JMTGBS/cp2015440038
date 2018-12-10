#include <stdio.h>
#include <windows.h>

void printArray(int* arr, int len) { // ������ �迭�� �Լ��� ������ ��� �� ������ �ַ� ����Ѵ�.
	for (int index = 0; index < len; index++) {
		printf("array[%d] = %d \n ", index, arr[index]);
	}
}
/* ... */
//void printArray(int* arr, int len) { ..... }
// �Լ� : findMinIndex()
//�Է� : �迭(�迭�̸�,�迭����)
//��� : �ּҰ��� �ε���
int findMinIndex(int* arr, int length) {
	int minIndex;
	int min = arr[0];
	for (int count = 0; count < length; count++) {
		if (min > arr[count])
			minIndex = count;
	}


	return minIndex;

}


// �Լ� : findMin()
//�Է� : �迭(�迭�̸�,�迭����)
//��� : �迭 �ּҰ�
int findMin(int* arr, int length) {
	int min = arr[0];
	for (int count = 1; count < length; count++) {
		if (min > arr[count])
			min = arr[count];
	}
	return min;
}

//�Լ�: swapElement()
//�Է�: �迭, �ΰ��� �ε��� 
//���: ����
//�μ�ȿ��: �迭�� �� �ε��� element�� �ٲ��.
void swapElement(int* arr, int i, int j) {
	int temp;
	temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}
//�Լ�: selectionSort()
//�Է�: �迭 
//���: ���� 
//�μ�ȿ��: �迭�� ���ĵ� 
void selectionSort(int * arr, int length) {
	int Index;
	int j = 0;
	int i = 0;

	for (i = 0; i < length; i++)
	{
		for (j = i; j < length; j++)
		{
			findMin(arr, length);
			Index = findMinIndex(arr, length);
		}
		swapElement(arr, i, Index);
	}
}

int main() {
	int a[] = { 27,18,3,15,40 };

	printf("�ּڰ� %d\n", findMin(a, 5));
	printf("�ּ� �ε��� = %d\n", findMinIndex(a, 5));
	swapElement(a, 0, 5);
	selectionSort(a, 5);
	printArray(a, 5);
}


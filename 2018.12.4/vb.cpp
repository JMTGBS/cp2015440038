#include <stdio.h> // ���α׷��Ӱ� �ڷ����� �����. ���ȭ(����, ���) 
#include <stdlib.h>
// ����ü ���� :  ������ ������ Ÿ������ �����Ͽ� ���ο� ������ Ÿ���� �����Ѵ�.  struct complex �� ������Ҹ� ���ϰ� �װ��� ���� �����Ѵ�.
struct complex {
		double real;  // member variable
		double imag;  // ��(ditto)
}; //����ü ������ �ݵ�� �����ݷ����� ������ �Ѵ�.

typedef struct complex Complex; // �ڷ��� :struct complex"�� ������ "Complex"��� �θ��ڴ�.
//������ Ÿ���� ���� ����
typedef int myIntType; // �ڷ��� "int"�� ������ "myIntType"��� �θ��ڴ�. (typedef = Ÿ���� �����Ѵ�.)

//�Լ� printComplex()
//�Է� : ���Ҽ�
//��� : ����
//�μ�ȿ�� : ���� 
void printComplex(Complex* ptr){
	printf("%f + j%f \n", ptr->real, ptr-> imag);
}

//�Լ� convertToConjugate()
//�Է� : ���Ҽ� (������)
//��� : ����
//�μ�ȿ�� : �Էµ� ���Ҽ��� �ӷ� ���Ҽ��� ��ȯ��.

void convertToConjugate(Complex* ptr){
	ptr -> imag = -1  * ptr -> imag;
}
// �Լ� : returnConjugate()
// �Է� : ���Ҽ� ������
// ��� :  ���Ҽ� ����
// �μ�ȿ�� : ����
Complex* returnConjugate(Complex* ptr){
	Complex* tempPtr;
	tempPtr = (Complex*) malloc(sizeof(Complex)); // �����Ҵ�
	tempPtr ->real = ptr->real; tempPtr->imag = -1  *ptr->imag;
	return tempPtr;
}

// �Լ� : AddConjugate()
// �Է� : ���Ҽ� ������
// ��� : ���Ҽ� ����
// �μ�ȿ�� : ����
Complex* AddConjugate(Complex* ptr){
	Complex* 
		}
typedef struct {
	double real;
	double imag;
} Complex;

int main () {
	myIntType count = 10; // ==> int count = 10; �� �Ȱ���~
	struct complex a; // ����ü ���� ����(������ Ÿ��)
	Complex a,b;

	a. real = 10; // ����ü ������ ��� ���� ���ٹ�� ==> ����ü �����̸�. ��������̸�
	a. imag = 20;
	printComplex(&a);
	b = returnConjugate(&a); printComplex(&b);
	convertToConjugate(&a); printComplex(&a);

	// ����ü ������ ���� ����
	Complex* ptr;
	ptr = &a;
	ptr -> real = 100;
	ptr -> imag = 200;
	printComplex(ptr);
	convertToConjugate(&a);

	return 0;
}

	
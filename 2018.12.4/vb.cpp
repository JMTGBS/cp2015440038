#include <stdio.h> // 프로그래머가 자료형을 만든다. 요약화(목적, 요약) 
#include <stdlib.h>
// 구조체 선언 :  기존의 데이터 타입으로 구성하여 새로운 데이터 타입을 선언한다.  struct complex 에 구성요소를 말하고 그것을 변수 선언한다.
struct complex {
		double real;  // member variable
		double imag;  // 상동(ditto)
}; //구조체 선언은 반드시 세미콜론으로 끝내야 한다.

typedef struct complex Complex; // 자료형 :struct complex"를 앞으로 "Complex"라고 부르겠다.
//데이터 타입의 별명 선언
typedef int myIntType; // 자료형 "int"를 앞으로 "myIntType"라고도 부르겠다. (typedef = 타입을 정의한다.)

//함수 printComplex()
//입력 : 복소수
//출력 : 없음
//부수효과 : 없음 
void printComplex(Complex* ptr){
	printf("%f + j%f \n", ptr->real, ptr-> imag);
}

//함수 convertToConjugate()
//입력 : 복소수 (포인터)
//출력 : 없음
//부수효과 : 입력된 복소수가 켤레 복소수로 변환됨.

void convertToConjugate(Complex* ptr){
	ptr -> imag = -1  * ptr -> imag;
}
// 함수 : returnConjugate()
// 입력 : 복소수 포인터
// 출력 :  복소수 변수
// 부수효과 : 없음
Complex* returnConjugate(Complex* ptr){
	Complex* tempPtr;
	tempPtr = (Complex*) malloc(sizeof(Complex)); // 동적할당
	tempPtr ->real = ptr->real; tempPtr->imag = -1  *ptr->imag;
	return tempPtr;
}

// 함수 : AddConjugate()
// 입력 : 복소수 포인터
// 출력 : 복소수 변수
// 부수효과 : 덧셈
Complex* AddConjugate(Complex* ptr){
	Complex* 
		}
typedef struct {
	double real;
	double imag;
} Complex;

int main () {
	myIntType count = 10; // ==> int count = 10; 과 똑같다~
	struct complex a; // 구조체 변수 선언(데이터 타입)
	Complex a,b;

	a. real = 10; // 구조체 변수의 멤버 변수 접근방법 ==> 구조체 변수이름. 멤버변수이름
	a. imag = 20;
	printComplex(&a);
	b = returnConjugate(&a); printComplex(&b);
	convertToConjugate(&a); printComplex(&a);

	// 구조체 포인터 변수 선언
	Complex* ptr;
	ptr = &a;
	ptr -> real = 100;
	ptr -> imag = 200;
	printComplex(ptr);
	convertToConjugate(&a);

	return 0;
}

	
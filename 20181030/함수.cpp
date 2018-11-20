
#include <stdio.h>
int gVar = 100; //전역 변수 (global variable)
//함수 sum()
//입력 : 두 정수
//출력 : 두 정수의 합 
//부수효과 : 없음
int sum(int a, int b){					//함수 선언 1.sum => 함수 이름, 2. 매개변수 (a,b) 3. 각 매개변수의 자료형 (inta, intb) 4. 반환값의 자료형(int x,y) 
	int c;
	c = a+b; a = 100;							//함수 본체 a가 100이더라도 x에는 아무런 영향을 주지는 않는다.
	return c;
}//함수 정의


// 함수 : goodprint()
// 입력 : 없음
// 출력 : 없음
// 부수 효과 : 화면에 good 출력

void goodPrint() {
	printf("good\n");
}

int main (){

	int x = 10, y = 20, z;
	z = sum(x, y);						// 함수 호출
	printf("z = %d\, x= %d\n",z,x);
	goodPrint();
	return 0;
}


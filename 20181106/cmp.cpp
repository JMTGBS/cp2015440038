#include <stdio.h>
void test (int a) {
	a = 100;
}
void testPointer(int*ptr){
	*ptr = 1000;
}
int main(){
	int a= 10;		// main ���� ���� ���� a (����� ����ġ!)
	test(a);		// #1 �Ű������� ���� ���� ����  #2 �Ű����� �� ����
	printf("a = %d\n",a); 


	// �����͸� �Ű����������� ����


	testPointer(&a); // �Ű����� ���� a�� �ּ��̴�. (������ �������� �ٲ� �� �ִ�. ptr �� ���ϴ� ������ access �� �� �ִ�.)
	printf("a = %d\n",a);  
	return 0;
}

#include <stdio.h>
int gVar = 100; //���� ���� (global variable)
//�Լ� sum()
//�Է� : �� ����
//��� : �� ������ �� 
//�μ�ȿ�� : ����
int sum(int a, int b){					//�Լ� ���� 1.sum => �Լ� �̸�, 2. �Ű����� (a,b) 3. �� �Ű������� �ڷ��� (inta, intb) 4. ��ȯ���� �ڷ���(int x,y) 
	int c;
	c = a+b; a = 100;							//�Լ� ��ü a�� 100�̴��� x���� �ƹ��� ������ ������ �ʴ´�.
	return c;
}//�Լ� ����


// �Լ� : goodprint()
// �Է� : ����
// ��� : ����
// �μ� ȿ�� : ȭ�鿡 good ���

void goodPrint() {
	printf("good\n");
}

int main (){

	int x = 10, y = 20, z;
	z = sum(x, y);						// �Լ� ȣ��
	printf("z = %d\, x= %d\n",z,x);
	goodPrint();
	return 0;
}


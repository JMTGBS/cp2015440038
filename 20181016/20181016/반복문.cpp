#include <stdio.h>
int main() {
	// ctrl - k , ctrl - f : Format , 소스코드 선택영역을 예쁘게 포맷한다.
	// ctrl -] : matcing parenthesies 
	// ctrl - k ctrl -c : comment out  프로그램에서 제외
	// ctrl - k ctrl -u : undo comment out 제외 시킨걸 복구

	/*int count =1;
	while (count<=10) {
		printf ("count = %d\n", count);
		count = count + 1;*/

	//int count = 1;
	//while (count <= 10)
	//	printf("count = %d\n", count++);

	//// 1에서 부터 100까지 3의 배수만 화면에 출력
	//count =1;

	//while (count <=100) {
	//	if (count%3 ==0)
	//		printf("count = %d\n", count);
	//	count++;

	//	// 1에서부터 100까지의 3의 배수를 제외한 정수만 화면에 출력
	//	count =1;

	//	while (count <=100) 
	//	if (count%3 != 0)
	//		printf("count = %d\n", count++);
	//			

	// 키보드에서 정수를 입력받아 3의 배수 여부를 알려주는 프로그램
	// 위의 작업을 반복적으로 수행하고 사용자가 100을 입력하면 종료한다.
	//int input;
	//while (1) {
	//	printf("정수를 입력하세요: ");
	//	scanf("%d", &input);
	//	if (input == 100)
	//		break;
	//	if (input>1000) {
	//		printf("입력한 정수가 1000보다 큽니다. 다시 입력해주세요.\n", input);
	//		continue;
	//	}
	//	if (input%3 ==0)
	//		printf("입력한 정수 %d는 3의 배수입니다.\n", input);
	//	else 
	//		printf("입력한 정수 %d는 3의 아닙니다\n" ,input);
	//};


	// 1에서 100까지의 정수의 합을 구하시오
		int sum =0,  i=1;
		while(i<=100){
			sum = sum+ i;
			i++;
			sum += i++;
		}
		printf("the sum is % d\n", sum);

	printf("프로그램 종료!!!!!!!\n");

	return 0;
}
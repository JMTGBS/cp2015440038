#include <stdio.h>
int main() {

	int apple, orange, banana, peach, x,y,z,w;
	printf("choose one of the following. apple, orange, banana, peach <enter your choice here> : ");
	scanf_s("%d %d %d %d", &x,&y,&z,&w);
	
	

	if (x == apple)
		printf("Your choice is 'apple'\n");
	else if (y == orange)
		printf("Your choice is 'orange'\n");
	else if (z == banana)
		printf("Your choice is 'banana'\n");
	else if (w == peach)
		printf("Your choice is 'peach'\n");

	return 0;

}
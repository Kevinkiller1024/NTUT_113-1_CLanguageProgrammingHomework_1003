#include <stdio.h>
#include <stdlib.h>

int num1,a;

int main(void) {
	printf("Please enter a integer.:\n");
	scanf_s("%d", &num1);
	if (num1 % 2 == 0){
		printf("%d is even.\n",num1);
	}
	else{
		printf("%d is odd.\n",num1);
	}
	system("pause");
	return 0;
}
#include <stdio.h>
#include <stdlib.h>

int num1,num2;

int main(void) {

	printf("Please enter two integers.(Use space to separate):\n");
	scanf_s("%d%d", &num1, &num2);
	if (num2 % num1 == 0) {
		printf("%d is a multiple of the %d\n",num1,num2);
	}
	else {
		printf("%d is not a multiple of the %d\n", num1, num2);
	}
	system("pause");
	return 0;
}
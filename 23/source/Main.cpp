#include <stdlib.h>
#include <stdio.h>

int main(void) {

	int num1, num2, num3, temp;

	printf("Please enter three integers.(Use space to separate):\n");
	scanf_s("%d%d%d",&num1,&num2,&num3);

	if (num1 > num2) {
		temp = num1;
		num1 = num2;
		num2 = temp;
	}
	if (num2 > num3) {
		temp = num2;
		num2 = num3;
		num3 = temp;
	}
	if (num1 > num2) {
		temp = num1;
		num1 = num2;
		num2 = temp;
	}
	printf("The smallest integers is %d\n", num1);
	printf("The largest integers is %d\n",num3);
	system("pause");
	return 0;
}
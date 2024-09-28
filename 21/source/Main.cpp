#include <stdio.h>
#include <stdlib.h>

int main(void) {

	/*------------Square------------*/

	for (int i = 0; i <= 8;i++) {
		printf("*");
	}
	printf("\n");
	for (int i = 0; i <= 6; i++) {
		printf("*       *\n");
	}
	for (int i = 0; i <= 8; i++) {
		printf("*");
	}
	printf("\n\n");

	/*------------------------------*/

	/*------------Circle------------*/

	printf("  ***  \n");
	printf(" *   * \n");
	for (int i = 0; i <= 4; i++) {
		printf("*     *\n");
	}
	printf(" *   * \n");
	printf("  ***  \n\n");

	/*------------------------------*/

	/*------------Arrow-------------*/

	printf("  *  \n");
	printf(" *** \n");
	printf("*****\n");
	for (int i = 0; i <= 5; i++) {
		printf("  *  \n");
	}
	printf("\n");

	/*------------------------------*/

	/*------------Diamond------------*/

	printf("    *    \n");
	printf("   * *   \n");
	printf("  *   *  \n");
	printf(" *     * \n");
	printf("*       * \n");
	printf(" *     * \n");
	printf("  *   *  \n");
	printf("   * *   \n");
	printf("    *    \n");

	/*------------------------------*/
	system("pause");
	return 0;
}
#include <stdio.h>
int main()
{
	//����18
	/*int i, j;
	for (i = 0; i < 3; i++) {
		for (j = 0; j <= i; j++) {
			printf("* ");
		}
		printf("\n");
	}*/

	//����19
	/*int i, j, num;
	scanf("%d", &num);

	for (i = 0; i < num; i++) {
		for (j = 0; j <= i; j++) {
			printf("* ");
		}
		printf("\n");
	}*/

	//����20
	/*int i, j;
	for (i = 0; i < 3; i++) {
		for (j = 0; j <= i; j++) {
			printf("* ");
		}
		printf("\n");
	}
	for (i = 0; i < 3; i++) {
		for (j =3; j > i; j--) {
			printf("* ");
		}
		printf("\n");
	}*/

	//����21
	/*int i, j;
	for (i = 0; i < 5; i++) {
		for (j = 4; j > i; j--) {
			printf(" ");
		}
		for (j = 0; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}*/

	//����22
	int i, j, z=1;
	for (int k = 0; k < 5; k++) {
		for (i = 4-k; i > 0; i--) {
			printf(" ");
		}
		for (j = 0; j < z; j++) {
			printf("*");
		}
		z += 2;
		printf("\n");
	}

}
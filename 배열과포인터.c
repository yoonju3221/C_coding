#include <stdio.h>
int main()
{
	//����21
	/*int num[10];
	int max = 0, i;
	for (i = 0; i < 10; i++) {
		scanf("%d", &num[i]);
		
	}
	for (i = 0; i < 10; i++) {
		if (num[i] > max) {
			max = num[i];
		}
	}
	printf("%d", max);*/


	//����22

	/*int a[5] = { 95,54, 21, 49, 100 };
	int i, j, tmp;
	for (i = 0; i < 4; i++) {
		for (j = i + 1; j < 5; j++) {
			if (a[i] > a[j]) {
				tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}
	for (i = 0; i < 5; i++) {
		printf("%d ", a[i]);
	}*/

	//����23
	/*int i, j;
	int arr[3][3] = { {3,5,4}, {2,6,7}, {8,10,1} };
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}*/

	//����24
	/*int num[15], i, j, max=0, min=1000;

	for (i = 0; i < 10; i++) {
		scanf("%d", &num[i]);
		if (num[i] % 2 == 0) {
			if (max < num[i]) {
				max = num[i];
			}
		}
		else {
			if (min > num[i]) {
				min = num[i];
			}
		}
	}printf("%d %d", max, min);*/

	//����25
	/*int kor[4], eng[4], mat[4];
	int sum = 0, ko=0, en=0, ma=0;

	for (int i = 1; i <4; i++) {
		scanf("%d %d %d", &kor[i], &eng[i], &mat[i]);
	}
	printf("\t����\t����\t����\t����\n");

	for (int i = 1; i < 4; i++) {
		sum = kor[i] + eng[i] + mat[i];
		ko += kor[i];
		en += eng[i];
		ma += mat[i];
		printf("%d��\t%d\t %d\t %d\t%d\n",i, kor[i], eng[i], mat[i],sum);
	}
	
	printf("�հ�\t%d\t%d\t%d\t%d\n", ko, en, ma, ko+en+ma);*/

	/*
	int i, j;
	int score[4][4] = {0};

	for(i=0; i<3; i++){
		printf("%d��° �л��� ���� ", i+1);
		for(j=0; j<3; j++)
		{
			scanf("%d", &score[i][j]);
			
			score[i][3] += score[i][j];
			score[i][3] += score[i][j];
			score[i][3] += score[i][j];
		}
	}
	printf("	���� ���� ���� ����\n");
	for(i = 0; i<4; i++){
		if(i<3) printf("%d��", i+1);
		else printf("�հ�");
		for(j=0; j<4; j++)
		{
		printf("%4d", score[i][j]);
		}
		printf("\n");
	}
	*/

	//����29
	int i, sum = 0;
	int arr[5] = { 1,2,3,4,5 };
	int *p = &arr[4];

	//printf("%d", *p);

	for (i = 4; i >= 0; i--) {
		sum += *(p--);
	}
	printf("%d", sum);
	

}
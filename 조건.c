#include <stdio.h>
int main()
{
	//����1
	/*int year;
	scanf("%d", &year);
	if ((year % 4 == 0 && year % 100 != 0) || (year %400==0 )) {
		printf("����\n");
	}
	else {
		printf("���\n");
	}*/

	//����2
	/*int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if (a > b && a > c) {
			printf("���� ū ���� %d�Դϴ�.\n", a);
	}
	else if (b > a && b > c) {
		printf("���� ū ���� %d�Դϴ�.\n", b);
	}
	else {
		printf("���� ū ���� %d�Դϴ�.\n", c);
	}*/

	//����3
	/*int num;
	printf("1.����\n2.����\n3.����\n���ڸ� �����ϼ���.\n");
	scanf("%d", &num);
	switch (num) {
	case 1:printf("������ �����ϼ̽��ϴ�.\n"); break;
	case 2:printf("������ �����ϼ̽��ϴ�.\n"); break;
	case 3:printf("������ �����ϼ̽��ϴ�.\n"); break;
	}*/


	//����4
	/*int score;
	printf("������ �Է��ϼ���. : ");
	scanf("%d", &score);
	if (score >= 90) {
		printf("��");
	}
	else if (score >= 80) {
		printf("��");
	}
	else if (score >= 70) {
		printf("��");

	}
	else if (score >= 60) {
		printf("��");
	}
	else {
		printf("��");
	}*/

	//����5
	/*char alpha = 'A';
	while (alpha <= 'Z') {
		printf("%c", alpha++);
	}
	return 0;*/

	//����6
	/*int sum = 0, num = 1;
	while (num <= 10) {
		sum += num;
		num++;
	}
	printf("1���� 10������ �� : %d", sum);*/

	//����6-2
	/*int sum = 0;
	for (int i = 1; i <= 10; i++) {
		sum += i;
	}
	printf("1���� 10������ �� : %d", sum);*/

	//������
	int num, sum = 0, count=0;
	scanf("%d", &num);

	while (num != 0) {
		count++;
		sum += num;
		scanf("%d", &num);
	}
		printf("�Էµ� �ڷ��� ���� : %d\n", count);
		printf("�Էµ� �ڷ��� �հ� : %d\n", sum);
		printf("�Էµ� �ڷ��� ��� : %.2f\n", (double)sum/(double)count);


}
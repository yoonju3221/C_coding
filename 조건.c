#include <stdio.h>
int main()
{
	//문제1
	/*int year;
	scanf("%d", &year);
	if ((year % 4 == 0 && year % 100 != 0) || (year %400==0 )) {
		printf("윤년\n");
	}
	else {
		printf("평년\n");
	}*/

	//문제2
	/*int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if (a > b && a > c) {
			printf("가장 큰 수는 %d입니다.\n", a);
	}
	else if (b > a && b > c) {
		printf("가장 큰 수는 %d입니다.\n", b);
	}
	else {
		printf("가장 큰 수는 %d입니다.\n", c);
	}*/

	//문제3
	/*int num;
	printf("1.삽입\n2.수정\n3.삭제\n숫자를 선택하세요.\n");
	scanf("%d", &num);
	switch (num) {
	case 1:printf("삽입을 선택하셨습니다.\n"); break;
	case 2:printf("수정을 선택하셨습니다.\n"); break;
	case 3:printf("삭제을 선택하셨습니다.\n"); break;
	}*/


	//문제4
	/*int score;
	printf("점수를 입력하세요. : ");
	scanf("%d", &score);
	if (score >= 90) {
		printf("수");
	}
	else if (score >= 80) {
		printf("우");
	}
	else if (score >= 70) {
		printf("미");

	}
	else if (score >= 60) {
		printf("양");
	}
	else {
		printf("가");
	}*/

	//문제5
	/*char alpha = 'A';
	while (alpha <= 'Z') {
		printf("%c", alpha++);
	}
	return 0;*/

	//문제6
	/*int sum = 0, num = 1;
	while (num <= 10) {
		sum += num;
		num++;
	}
	printf("1부터 10까지의 합 : %d", sum);*/

	//문제6-2
	/*int sum = 0;
	for (int i = 1; i <= 10; i++) {
		sum += i;
	}
	printf("1부터 10까지의 합 : %d", sum);*/

	//형성평가
	int num, sum = 0, count=0;
	scanf("%d", &num);

	while (num != 0) {
		count++;
		sum += num;
		scanf("%d", &num);
	}
		printf("입력된 자료의 개수 : %d\n", count);
		printf("입력된 자료의 합계 : %d\n", sum);
		printf("입력된 자료의 평균 : %.2f\n", (double)sum/(double)count);


}
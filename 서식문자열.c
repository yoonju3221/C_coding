#include <stdio.h>
int main()
{
	/*printf("%s\n", "수를 출력할 때는 따옴표를 생략합니다.");
	printf("%s\n", "123");
	printf("%d\n %1f\n", 5, 6.5);*/

	/*printf("\tsubject\tscore\n");
	printf("\t==================\n");
	printf("\tkorean\t90\n");
	printf("\tenglish\t100\n");
	printf("\tmath\t80\n");*/

	/*int tall = 0;
	double w = 0;
	char name[20];
	
	scanf("%d %lf %s", &tall, &w, name);
	printf("%d %f %s", tall, w, name);*/

	/*int a,b, c;
	scanf("%d %d", &a, &b);
	c = ++a + b--;
	printf("a = %d, b = %d, c= %d", a, b, c);*/

	int a = 0, b = 1, c = 2;
	int result1 = (a < b) && (b < c);
	int result2 = (a&&b) || (b&&c);
	int result3 = (a || !c);
	int result4 = (a != b) && (b != c);

	printf("%d %d %d %d", result1, result2, result3, result4);
	

	/*
	double d, e;
	scanf("%lf %lf", &d, &e);
	a = d + e;
	b = (int)d + (int)e;
	printf("%d %d", a,b);*/

	/*int kor, eng, mat;
	double sum;
	scanf("%d %d %d", &kor, &eng, &mat);
	sum = kor + eng + mat;
	printf("%.1f", sum / 3);*/
	return 0;
}
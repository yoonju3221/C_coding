#include <stdio.h>

/*int main()
{
	int kor, eng, sum;
	double aver;
	char name[100];
	FILE *in, *out;
	in = fopen("input1.txt", "rt");
	if (in == NULL)
	{
		printf("파일이 열리지 않았습니다.\n");
		return;
	}
	out = fopen("output1.txt", "wt");
	fscanf(in, "%s %d %d", name, &kor, &eng);
	sum = kor + eng;
	aver = sum / 2.0;
	printf("%s %d %.1f", name, sum, aver);
	fprintf(out, "%s %d %.1f", name, sum, aver);
	fclose(in);
	fclose(out);
}*/

/*int main()
{
	int num[10], i;
	FILE *in, *out;

	in = fopen("input2.txt", "rt");
	out = fopen("output2.txt", "wt");
	for (i = 0; i < 10; i++) {
		fscanf(in, "%d", &num[i]);
		if (i % 2 != 0) {
			fprintf(out, "%d ", num[i]);
		}
	}
	fclose(in);
	fclose(out);
}*/

struct data {
	int grade, rank;
	char name[20];
}list[10];

void input()
{
	FILE *in;
	int i;
	in = fopen("input3.txt", "r");
	for (i = 0; i < 10; i++) {
		fscanf(in, "%s %d", list[i].name, &list[i].grade);
	}
	fclose(in);
}
void sort() {
	struct data temp;
	int i;

	for (i = 0; i < 9; i++) {
		for (int j = i + 1; j<10; j++) {
			if (list[j].grade > list[i].grade) {
				temp = list[i];
				list[i] = list[j];
				list[j] = temp;
			}
		}
	}

	list[0].rank = 1;
	for (i = 1; i < 10; i++) {
		if (list[i].grade == list[i - 1].grade) {
			list[i].rank = list[i - 1].rank;
		}
		else {
			list[i].rank = i + 1;
		}
	}
}
void output()
{
	FILE *out;
	int i;
	out = fopen("output3.txt", "w");
	for (i = 0; i < 10; i++) {
		fprintf(out, "%s %d %d\n", list[i].name, list[i].grade, list[i].rank);
	}
}
int main()
{
	input();
	sort();
	output();
}
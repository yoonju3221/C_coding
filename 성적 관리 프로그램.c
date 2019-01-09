#include <stdio.h>
#pragma warning(disable 4996);

typedef struct student 
{
	int id;//학번
	char name[20];//이름
	int kor, mat, eng;//3과목 점수
	int sum;//총점
	double aver;//평균
	char grade;//학점
} Student;

void input(Student *pary) {
	for (int i = 0; i < 5; i++) {

		printf("학번 : ");
		scanf("%d", &pary->id); 

		printf("이름 : ");
		scanf("%s", pary->name); 

		printf("국어, 수학, 영어 점수 : ");
		scanf("%d %d %d", &pary->kor, &pary->mat, &pary->eng); printf("\n");

		pary++;
	}
	
}

void value(Student *pary) {
	//총점 평균 학점 계산

	for (int i = 0; i < 5; i++) {
		pary->sum = pary->kor + pary->mat + pary->eng;
		pary->aver = pary->sum / 3;

		if (pary->aver >= 90) { pary->grade = 'A'; }
		else if (pary->aver >= 80) { pary->grade = 'B'; }
		else if (pary->aver >= 70) { pary->grade = 'C'; }
		else { pary->grade = 'F'; }

		pary++;
	}
}

void print(Student *pary) {
	for (int i = 0; i < 5; i++) {
		printf("%d %s %d %d %d %d %1.f %c\n",
			pary->id, pary->name, pary->kor, pary->mat, pary->eng, pary->sum, pary->aver, pary->grade);
		pary++;
	}

}

void sort_print(Student *pary) {
	Student temp;

	for (int i = 0; i < 4; i++) {
		for(int j=i+1; j<5; j++){
			if (pary[j].sum > pary[i].sum) {
				temp = pary[i];
				pary[i] = pary[j];
				pary[j] = temp;
			}
		}
	}
}

int main()
{
	Student ary[5];
	input(ary);
	value(ary);
	print(ary); printf("\n");
	sort_print(ary);
	print(ary);
}
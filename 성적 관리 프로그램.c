#include <stdio.h>
#pragma warning(disable 4996);

typedef struct student 
{
	int id;//�й�
	char name[20];//�̸�
	int kor, mat, eng;//3���� ����
	int sum;//����
	double aver;//���
	char grade;//����
} Student;

void input(Student *pary) {
	for (int i = 0; i < 5; i++) {

		printf("�й� : ");
		scanf("%d", &pary->id); 

		printf("�̸� : ");
		scanf("%s", pary->name); 

		printf("����, ����, ���� ���� : ");
		scanf("%d %d %d", &pary->kor, &pary->mat, &pary->eng); printf("\n");

		pary++;
	}
	
}

void value(Student *pary) {
	//���� ��� ���� ���

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
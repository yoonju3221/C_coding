#include <stdio.h>
#include <stdlib.h>

typedef struct train
{
	int seats;
	struct train *next;
}Train;
int main()
{
	Train *head = NULL, *tail, *prev;
	int i, n = 10;
	for (i = 0; i < 5; i++) {
		if (head == NULL) {
			head = tail = (Train*)malloc(sizeof(Train));
			head->seats = n;
			n += 10;
		}
		else {
			tail->next = (Train*)malloc(sizeof(Train));
			tail = tail->next;
			tail->seats = n;
			tail->next = NULL;
			n += 10;
		}
	}
	for (tail = head; tail != NULL; tail = tail->next)
	{
		printf("%d\t", tail->seats);
	}
	printf("\n");

	tail = head;
	while (tail&&tail->seats != 10) {
		prev = tail;
		tail = tail->next;
	}
	if (tail == NULL) {
		puts("찾는 데이터가 없습니다.");
	}
	else if (tail == head) {
		head = tail->next;
		free(tail);
	}
	else {
		prev->next = tail->next;
		free(tail);
	}
	for (tail = head; tail != NULL; tail = tail->next)
	{
		printf("%d\t", tail->seats);
	}
}
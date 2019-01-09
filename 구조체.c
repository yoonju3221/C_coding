#include <stdio.h>
struct person
{
	char name[20];
	int age;
};
int main()
{
	struct person self;

	printf("이름은?");
	scanf("%s", self.name);

	printf("나이는?");
	scanf("%d", &self.age);

	printf("당신의 이름은 %s이고 ", self.name);
	printf("나이는 %d 이군요.", self.age);
}
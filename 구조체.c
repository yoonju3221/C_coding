#include <stdio.h>
struct person
{
	char name[20];
	int age;
};
int main()
{
	struct person self;

	printf("�̸���?");
	scanf("%s", self.name);

	printf("���̴�?");
	scanf("%d", &self.age);

	printf("����� �̸��� %s�̰� ", self.name);
	printf("���̴� %d �̱���.", self.age);
}
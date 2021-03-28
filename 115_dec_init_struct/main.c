#include <stdio.h>

struct Employee {
	char name[32];
	int hireDate;
	float salary;
};

int main(int argc, char *argv[])
{
	struct Employee emp1 = { "Dave", 25, 13056.79 };
	struct Employee emp2;
	
	printf("please enter emp2 detail:\n");
	printf("name: ");
	scanf("%s", emp2.name);
	
	printf("hireDate: ");
	scanf("%i", &emp2.hireDate);
	
	printf("salary: ");
	scanf("%f", &emp2.salary);
	
	printf("\n");
	printf("emp%i name: %s, hireDate: %i, salary: %f\n", 1, emp1.name, emp1.hireDate, emp1.salary);
	printf("emp%i name: %s, hireDate: %i, salary: %f\n", 2, emp2.name, emp2.hireDate, emp2.salary);
	
	return 0;
}

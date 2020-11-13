#include <stdio.h>
#include <string.h>
struct MyStruct1
{
	char name[100];
	float id;
	char work[100];
	char salary[1100];
	char office[1000];
};

struct Employee
{
	char name[1000];
	float id;
	int salary;
	char office[1000];
	char job[1000];
};

int main(int argc, char const *argv[])
{
	struct MyStruct1 structure1 = {"Sannidhya Dasgupta", 1.0, "Web Developer", "1,00,000", "21/4 Rajani Sen Road, Kolkata 700015"};
	printf("The name of the employee is %s\n", structure1.name);
	printf("The ID of the employee is %1.1f\n", structure1.id);
	printf("The salary of the employee is %s\n", structure1.salary);
	printf("The job of the employee is %s\n", structure1.work);
	printf("The office of the employee is located at %s\n", structure1.office);

	// *? struct Employee Employee1 =
	return 0;
}
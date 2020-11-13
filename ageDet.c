#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
	int age;
	printf("Welcome to the liscense manager system\n");
	printf("We will ask your age and decide if you are eligile for driving a car or not\n\n");
	printf("Please enter your age: ");
	scanf("%d", &age);
	printf("Your age is %d\n", age);
	if (age < 18)
	{
		printf("As we see that your age is lesser than 18 we cannot grant you the permission to drive. Sorry!");
	}
	else if (age >= 18 && age < 60)
	{
		printf("We grant you the permission to drive a car. You can access the liscense in the counter\n");
	}

	else if (age > 60)
	{
		printf("As we see your age is higher than 60 we cannot grant you the permission");
	}

	else
	{
		printf("Input invalid");
	}
	return 0;
}
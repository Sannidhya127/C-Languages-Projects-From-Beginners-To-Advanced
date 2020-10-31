<<<<<<< HEAD


#include <stdio.h>

int main()
{
	int age;
	printf("Enter your age\n");

	scanf("%d", &age);
	printf("You have entered %d as your age\n", age);
	if (age >= 18)
	{
		printf("You can vote!");
	}

	else if (age >= 10)
	{
		printf("You are between 10 to 18 and you can vote for kids");
	}

	else if (age >= 3)
	{
		printf("You are between 3 to 10 and you can vote for babies");
	}

	else
	{
		printf("You cannot vote!");
	}

	return 0;
}

// maths and science - 45
// science - 15
// maths - 15

// print the type of gift you are giving to them
=======
#include <stdio.h>
int main(int argc, char const *argv[])
{
	/* code */
	int age;
	// char name;
	// printf("Please enter your name");
	// scanf("%c", &name);
	printf("Please enter your age:\n");
	scanf("%d", &age);
	printf("So your age is %d dear user\n", age);
	if (age >= 1 && age < 60)
	{
		printf("You are allowed to drive a car");
	}
	else if (age >= 60)
	{
		printf("You are old dear man. Go get a driver");
	}
	else
	{
		printf("You are not allowed to drive a car");
	}
	return 0;
}
>>>>>>> 74682ba (Done till break statements in C, continue is still left)

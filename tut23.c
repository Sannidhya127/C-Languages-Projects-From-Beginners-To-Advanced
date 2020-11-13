#include <stdio.h>
int main(int argc, char const *argv[])
{
	// printf("This is an array tutorial\n");
	int marks[4];
	// marks[0] = 34;
	// marks[1] = 64;
	// marks[2] = 100;
	// printf("marks of the student 1 is: %d\n", marks[0]);
	for (int i = 0; i < 4; i++)
	{
		printf("Enter the marks for student No.%d: ", i);
		scanf("%d", &marks[i]);
	}
	for (int i = 0; i < 4; i++)
	{
		printf("The marks for student No.%d is: %d\n", i, marks[i]);
		// scanf("%d", &marks[i]);
	}

	int age[5] = {75, 64, 64, 74, 8, 75};
	for (int i = 0; i < 6; i++)
	{
		printf("The age for student No.%d is: %d\n", i, age[i]);
		// scanf("%d", &marks[i]);
	}
	return 0;
}

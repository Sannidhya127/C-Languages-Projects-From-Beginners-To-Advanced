#include <stdio.h>
<<<<<<< HEAD

int main()
{
	// printf("Hello World\n");
	int i, age;
	for (i = 0; i < 10; i++)
	{
		printf("%d\nEnter your age\n", i);
		scanf("%d", &age);
		// if (age>10)
		// {
		//     break;
		// }
		if (age > 10)
		{
			break;
		}
		printf("we have not come accross any continue statements");
		printf("we have not come accross any continue statements");
		printf("we have not come accross any continue statements");
		printf("we have not come accross any continue statements");
		printf("Harry is a good boy");
=======
int main(int argc, char const *argv[])
{
	int i, age;
	i = 0;
	// banned = "San";
	for (; i < 10; i++)
	{
		printf("Enter your age:\n");
		scanf("%d", &age);
		if (age < 18)
		{
			/* code */
			printf("You have been blocked from this game as you are under 18 years");
			break;
		}
		else
		{
			printf("Welcome!");
			continue;
		}

		/* code */
		printf("%d\n", i);
>>>>>>> 74682ba (Done till break statements in C, continue is still left)
	}

	return 0;
}

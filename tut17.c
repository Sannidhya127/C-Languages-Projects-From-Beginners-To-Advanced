#include <stdio.h>
// #include <tut16.c>
int main(int argc, char const *argv[])
{
	int i = 0;
	int j, num;
	// label:
	// 	printf("We are inside the deadly label\n");
	// 	goto end;
	// 	printf("This is C\n");
	// 	goto label;
	// end:
	// 	printf("We are at the end of the label\n");
	for (i = 0; i < 10; i++)
	{
		printf("%d\n", i);
		for (j = 0; j < 10; j++)
		{
			printf("Enter a number\nEnter 0 to exit\n");
			scanf("%d", &num);
			if (num == 0)
			{
				goto end;
			}
		}
	}
end:
	printf("You are et the end now\n");

	return 0;
}

#include <stdio.h>
// !Star patter n programm in C Language made by Sannidhya Dasgupta
void starPattern(int rows)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}

void reverseStarPattern(int rows)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j <= rows - i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}

int main(int argc, char const *argv[])
{
	/* Start Pattern Ex */
	int rows, opt;
	printf("Please enter 0 for non-reversed triangular star pattern and 1 for reversed triangular star pattern\n");
	scanf("%d", &opt);
	switch (opt)
	{
	case 0:
		printf("How many rows do you want: ");
		scanf("%d", &rows);
		starPattern(rows);
		break;

	case 1:
		printf("How many rows do you want: ");
		scanf("%d", &rows);
		reverseStarPattern(rows);
		break;

	default:
		printf("Your input is invalid");
		break;
	}
	return 0;
}

/* Take input from the user and ask user to choose 0 for triangular star pattern and 1 for reversed triangular star pattern Then print the pattern accordingly
*
**
***
**** -> Triangular star pattern

*****
****
***
**
* -> Reversed triangular star pattern

*/
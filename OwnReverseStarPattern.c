#include <stdio.h>
#include <string.h>

void Starpattern(int rows)
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

void ReverseStarpattern(int rows)
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
	int ron;
	printf("Welcome to Sanni Star pattern reverser in C!\n");
	// int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	int nRows;
	printf("Enter 0 for star pattern and 1 for reverse star pattern: ");
	scanf("%d", &ron);
	switch (ron)
	{
	case 0:

		printf("Enter the nuber of rows you want: ");
		scanf("%d", &nRows);
		Starpattern(nRows);
		break;
	case 1:
		// int nRows;
		printf("Enter the nuber of rows you want: ");
		scanf("%d", nRows);
		ReverseStarpattern(nRows);
		break;
	default:
		printf("The systerm expects an integer 0 or 1. You entered %d which is invalid", ron);
		break;
	}

	// ReverseStarpattern(5);
	return 0;
}
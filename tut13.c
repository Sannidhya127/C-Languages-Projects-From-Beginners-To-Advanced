#include <stdio.h>
int main(int argc, char const *argv[])
{
	/* code */
	int i, num;
	i = 0;
	printf("Please enter a number:\n");
	scanf("%d", &num);
	printf("\n");
	do
	{
		i += 1;
		// g -= 1;
		// printf("%d %d\n", i, g);
		printf("%d\n", i);
	} while (i < num);

	// while (i < 10000)
	// {
	// 	i += 1;
	// 	printf("%d\n", i);
	// }

	return 0;
}

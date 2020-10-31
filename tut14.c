#include <stdio.h>
int main(int argc, char const *argv[])
{
	int i, num;
	i = 0;
	printf("Please enter a number:\n");
	scanf("%d", &num);
	printf("\n");
	while (i < num)
	{
		i += 1;
		printf("%d\n", i);
	}

	return 0;
}

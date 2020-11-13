#include <stdio.h>

int main(int argc, char const *argv[])
{
	printf("This is math\n");
	char num = 't';
	char *ptr = &num;
	printf("%d\n", ptr);
	ptr = ptr + 5;

	// *! ptra++ is the same as ptra + 1

	printf("%c\n", num);
	printf("%d\n", ptr);

	int arr[5] = {1, 2, 3, 4, 5};
	printf("%d\n", arr[2]);
	int i;
	for (int i = 0; i < 5; i++)
	{
		printf("The value of array no %d is %d\n", i, arr[i]);
		// printf("")
	}

	int *prts = arr;
	printf("This is the pointer value\n");
	printf("%d\n", prts);
	// printf("%d\n", prts + 1);
	// printf("%d\n", prts + 2);
	// printf("%d\n", prts + 3);
	for (int i = 0; i < 5; i++)
	{
		printf("The memory location of array no %d is %d\n", i, prts + i);
		// printf("")
	}
	return 0;
}

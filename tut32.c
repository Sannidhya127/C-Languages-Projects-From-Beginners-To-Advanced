#include <stdio.h>

int func1(int array[])
{
	for (int i = 0; i < 4; i++)
	{
		printf("The value at %d is %d\n", i, array[i]);
	}
	array[0] = 382; // *! Very important point that if you change any value here, it gets reflected in main()
	return 0;
}

int func2(int *ptr)
{
	for (int i = 0; i < 4; i++)
	{
		printf("The value at %d is %d\n", i, ptr[i]);
	}
	ptr[0] = 44;
	*(ptr + 2) = 98;
	return 0;
}

void func3(int array[2][2])
{
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{

			printf("The value at %d, %d is %d\n", i, j, array[i][j]);
			// printf("The value at %d is %d\n", j, array[j]);
		}

		/* code */
	}
}
int main(int argc, char const *argv[])
{
	// // printf("This is running");
	int arr[] = {7, 656, 65, 87};
	int arr2[][2] = {{56, 76}, {78, 75}};
	// func1(arr);
	// printf("%d\n", arr[0]);
	// func2(arr);
	// printf("%d\n", arr[0]);
	// printf("%d\n", arr[2]);
	func3(arr2);
	return 0;
}
#include <stdio.h>

int fib_recursive(int n)
{
	if (n == 1 || n == 2)
	{
		return n - 1;
	}
	else
	{
		return fib_recursive(n - 1) + fib_recursive(n - 2);
	}
}
int fib_iterative(int num)
{
	int a, b;
	a = 0;
	b = 1;
	for (int i = 0; i < num - 1; i++)
	{
		b = a + b;
		a = b - a;
	}

	return a;
}
int main(int argc, char const *argv[])
{

	int index;
	printf("Enter a index to get the fibonacci series: ");
	// printf("Click enter to continue\n");
	scanf("%d", &index);
	printf("The value of fibonacci series at position %d using iterative approach is %d\n", index, fib_iterative(index));
	printf("The value of fibonacci series at position %d using recusive approach is %d\n", index, fib_recursive(index));
	return 0;
}
#include <stdio.h>
int factorial(int number)
{
	if (number == 1 || number == 0)
	{
		return 1;
	}
	else
	{
		return (number * factorial(number - 1));
	}
}
int main(int argc, char const *argv[])
{
	int num, fact;
	printf("We will learn Recursions here\n");
	printf("Enter the number you want to find to finfd the factorial of:\n");
	scanf("%d", &num);
	fact = factorial(num);
	printf("%d\n", fact);
	return 0;
}

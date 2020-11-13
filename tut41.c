#include <stdio.h>
#include <string.h>
int func1(int a)
{
	static int data = 767;
	data = data++;
	return data;
}
int main(int argc, char const *argv[])
{
	int a, func;
	a = 5;
	func = func1(a);
	printf("First Call: %d\n", func);
	printf("Second Call: %d\n", func);
	printf("Third Call: %d\n", func);
	printf("Fourth Call: %d\n", func);
	return 0;
}
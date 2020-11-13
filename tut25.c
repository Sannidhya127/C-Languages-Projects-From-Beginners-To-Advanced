#include <stdio.h>

int main(int argc, char const *argv[])
{
	int a = 76;
	int *ptr = &a;
	int *ptra = &*ptr;
	printf("%d\n", a);
	printf("Value of int a is %d\n", *ptr);
	printf("Adress of int a is %p\n", *ptr);
	printf("Adress of pointer ptr is %p\n", ptra);
	int num = 673;
	printf("%d\n", num);
	int *nnum = NULL;
	printf("%p\n", nnum);
	return 0;
}

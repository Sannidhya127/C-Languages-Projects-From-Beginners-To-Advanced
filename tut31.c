#include <stdio.h>

void getpointer(int a)
{
	printf("The initial value is %d\n", a);
	int *prts = &a;
	printf("The memory location of the pointer is %d\n", prts);
	// int b = 50;
	// a = b;
	printf("The value after changing is %d\n", a);
	printf("\n\n\n");
	// return "Done";
}

void QuickQuiz(int *address1, int *address2)
{
	// int address3 = address2;
	// int address4 = address1;
	// // int differ =
	int sub1 = &address1;
	int sub2 = &address2;
	int *num1 = sub1 + sub2;
	int *num2 = sub1 - sub2;
	*address1 = *num1;
	*address2 = *num2;

	printf("The changed value of address1 is %d\n", address1);
	printf("The changed value of address2 is %d\n", address2);
	// int *address1 = address1;
	// int *address2 = address2;
}

void changeValue(int *a)
{
	*a = 34;
	printf("\n\n\n");
}
int main(int argc, char const *argv[])
{
	int num, ptn;
	num = 100;
	ptn = 10;
	// getpointer(num);
	// // printf("%d\n", ptn);
	// // printf("Outside function %d remains %d\n", num, num);
	// printf("The initial value of a is %d\n", num);
	// changeValue(&num);
	// printf("The initial value of a is %d\n", num);
	// getpointer(num);
	// int *numPtr = &num;
	// printf("The initial value of a is %d\n", num);

	// printf("%d\n", numPtr);
	// // printf()
	QuickQuiz(&num, &ptn);
	printf("The value of num is %d\n", num);
	printf("The value of ptn is %d\n", ptn);

	return 0;
}

//*! Quick Quiz:
//*! Given two numbers a and b,  add them then subtract them and assign them to a and b using call by reference.

//*! a = 4
//*! b = 3

//*! after running the function, the values of a and b should be:
//*! a = 7
//*! b = 1

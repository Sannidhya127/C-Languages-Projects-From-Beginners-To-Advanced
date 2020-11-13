#include <stdio.h>

int printval(int nA, int nB, int nC)
{
	printf("The sum of %d, %d, %d is ", nA, nB, nC);
	return nA + nB + nC;
}

void star(int n)
{
	int i = 0;
	// char starc = '*';
	for (i = 0; i < n; i++)
	{
		printf("%c\n", '*');
	}

	// printf("%c", '* *');
	// printf("%c\n", '* * *');
	// printf("%c\n", '* * * *');
}

int RetNum()
{
	int num, i;
	printf("Please enter a number: ");
	scanf("%d", &num);
	printf("The number you entered is ");
	return num;
}

void Simple()
{
	printf("This is a function without any arguments and return values\a\n");
}
int main(int argc, char const *argv[])
{
	int a, b, c, ret, satat, MyFunc, simpleFunc;
	a = 66;
	b = 566;
	c = 468;
	printf("\a");

	// ret = printval(a, b, c);
	// printf("%d\n", ret);
	// star(10);
	// printf("%d\n", star);
	// MyFunc = RetNum();
	// printf("%d\n", MyFunc);
	Simple();

	return 0;
}

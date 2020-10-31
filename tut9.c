#include <stdio.h>
<<<<<<< HEAD
#define PI 3.14
/* 
%c

Used to print the character

%d

Used to print the signed integer

%f

Used to print the float values

%i

Used to print the unsigned integer

%l

Used to long integer

%lf

Used to print the double integer

%lu

Used to print the unsigned int or unsigned long integer

%s

Used to print the String

%u

Used to print the unsigned integer
*/
int main()
{
	int a = 8;
	const float b = 7.333;
	// PI = 7.33; //cannot do this since PI is a constant
	printf(" tab character \t\t my backslash  %f", PI);
	// b = 7.22; //cannot do this since b is a constant
	// printf("Hello World\n");
	// printf("The value of a is %d and the value of b is %2.4f\n", a, b);
	// printf("%18.4f this",b);

=======
#include <windows.h>
#include <direct.h>

#define PI 3.14
/* %c is used for characters
   %d is is used for integers
   %f is used for floating point numbers
   %l is used for longs
   %lf is used for doubles
   %Lf is used for long doubles*/
int main(int argc, char const *argv[])
{
	/* code */
	int a = 43;
	double b = 124356.34354678;
	printf("The value of a is %d\n", a);
	printf("The value of b is %1.8lf\n", b);

	const int num = 89;
	printf("The value of \a num is %d\n", num);
	// getc();
	printf("The value of PI is %1.2f", PI);
>>>>>>> 74682ba (Done till break statements in C, continue is still left)
	return 0;
}

#include <stdio.h>
#include <winuser.h>
#include <string.h>
// #include <gtk/gtk.h>
#include <icm.h>
#include <stdlib.h>

typedef struct data
{
	char name[1000];
	int class;
	char section[100];
	int rollno;
} dt;

int main(int argc, char const *argv[])
{
	struct data dt = {"Haris Ali Khan", 8, "C", 34};
	printf("Name: %s\n", dt.name);
	// line();
	printf("Class: %d\n", dt.class);
	printf("Section: %s\n", dt.section);
	printf("Roll No.: %d\n", dt.rollno);

	// *? typedef previous_name alia_name

	;

	typedef unsigned long ul;

	ul data1, data2, data3;

	data1 = 1890;
	printf("%d\n", data1);

	// int *a, b;
	typedef int *intptr;
	intptr a, b;
	int c = 89;
	a = &c;
	b = &c;
	printf("%d\n", a);
	printf("%d\n", b);

	return 0;
}
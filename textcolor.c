// #include <graphics.h>
#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <stdlib.h>
#include <unistd.h>
// #include <gtk/gtk.h>
// #include <cinder.h>
// #include <conio.h>
// #include <graphics.h>

int main(void)
{
	/*
	System FUnction Colors:-

	0 = Black;
	8 = Gray
	1 = Blue
    9 = Light Blue
	2 = Green
	A = Light Green
	3 = Aqua
	B = Light Aqua
	4 = Red
	C = Light Red
	5 = Purple
	D = Light Purple
	6 = Yellow
	E = Light Yellow
	7 = White
	F = Bright White
	*/

	/*
	ANSI COde COLORS:-
	[0;31m	Red
    [1;31m	Bold Red
    [0;32m	Green
    [1;32m	Bold Green
    [0;33m	Yellow
    [01;33m	Bold Yellow
    [0;34m	Blue
    [1;34m	Bold Blue
    [0;35m	Magenta
    [1;35m	Bold Magenta
    [0;36m	Cyan
    [1;36m	Bold Cyan
    [0m	Reset
	*/

	// system("COLOR 4");
	// printf("def(args*){{}}\n");
	// for (int i = 0; i < 100000000000; i++)
	// {
	// 	continue;
	// }
	// break;
	// sleep(5);

	// system("COLOR 2");
	// printf("Deleted the files\n");

	printf("\033[0;31m");
	printf("def DataFetcher(str, data, ls):\n\tls= [];\n\tstr = input('Data Here: ') \n");
	printf("\033[0mEND;\n");
	printf("\033[0;32m");
	printf("def DataFetcher(str, data, ls, user):\n\tls= [];\n\tname = onput('Name: ')\n\tstr = input('Data Here: ')\n");
	printf("\033[0mEND;\n");

	// sleep(500);
	// int caq;
	// printf("Enter 1 to exit: ");
	// scanf("%d", &caq);
	// printf("Thank You");
	/* One-time initialization near the beginning of your program */

	printf("Normal text\n");
	system("setterm -bold on");
	printf("Bold text\n");
	system("setterm -bold off");
	// getch();
	return 0;
}

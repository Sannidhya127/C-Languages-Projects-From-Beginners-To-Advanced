#include <stdio.h>
int main(int argc, char const *argv[])
{
	char name[17] = "Sanni is my name";
	printf("%s\n", name);
	char str[100];
	printf("Enter your name idiot (not more than hundred characters):\n");
	gets(str);
	printf("Hi %s. Nice to meet you\n", str);
	char name1[50];
	printf("Please enter your name:\n");
	gets(name1);
	printf("Welcome! %s\n", name1);

	// puts("Hi Mr. %d"str);
	return 0;
}
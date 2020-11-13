#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
	char fname[100] = "Sannidhya ";
	char dname[100] = "Dasgupta The Great";
	printf("The ASCII Value difference of the two strings fname and dname is: %d (not reliable. might be invalid or wrong)\n", strcmp(fname, dname));
	strcat(fname, dname);
	printf("%s\n", fname);
	int len = strlen(fname);
	printf("%d\n", len);
	// printf("The reversed string fname is: ");
	// puts(strrev(fname));
	printf("%s\n", fname);
	char cname[500];
	strcpy(cname, fname);
	printf("%s\n", cname);
	// int arr[] = {74, 75, 76, 77, 78, 79, 80};
	// printf("%d\n", strrev(arr));
	// char conact = strcat("Sanni", "Das");
	// printf("%s\n", conact);
	return 0;
}

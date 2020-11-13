#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
	char name[] = {'s', 'a', 'n', 'n', 'i', 'd', 'h', 'y', 'a', '\0'};
	int nums[] = {5, 7, 87, 65, 75};
	printf("%s\n", strrev(name));
	printf("%d\n", strrev(nums));
	return 0;
}
#include <stdio.h>
int main(int argc, char const *argv[])
{
	int i, c;
	i = 0;
	c = 0;					  /*even if the variables are commented out from here but defined in expression 1 of for loop they will un without any error*/
	for (; i < 101; i++, c++) /*You can remove expression 1 from here i.e the one defining the variables but you cannot remove them from the one above because somewhere or the other the variable needs o be declared*/
	{
		/* code */
		printf("%d %d\n", i, c);
	}

	return 0;
}
<<<<<<< HEAD

=======
>>>>>>> 74682ba (Done till break statements in C, continue is still left)

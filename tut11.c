#include <stdio.h>

<<<<<<< HEAD
int main()
{
	int age, marks;
	printf("Enter your age\n");
	scanf("%d", &age);

	printf("Enter your marks\n");
=======
int main(int argc, char const *argv[])
{
	/* code */
	int age, marks;
	printf("Abe age bata pagal:\n");
	scanf("%d", &age);

	printf("Beta marks bolo jaldi warna kamar tor dunga:\n");
>>>>>>> 74682ba (Done till break statements in C, continue is still left)
	scanf("%d", &marks);

	switch (age)
	{
<<<<<<< HEAD
	case 3:
		printf("The age is 3\n");
		switch (marks)
		{
		case 45:
			printf("Your marks are 45");
			break;

		default:
			printf("your marks are not 45");
		}
		break;

	case 13:
		printf("The age is 13\n");
		break;

	case 23:
		printf("The age is 23\n");
		break;

	default:
		printf("Age is not 3, 13 or 23\n");
	}

	return 0;
}
=======
	case 1:
		printf("Hi little baby!!");
		break;
	case 23:
		printf("The age is 23 and....\n");
		switch (marks)
		{
		case 100:
			printf("Very good beta! Full marks!!! Go study more!!!!:)");
			break;
		case 0:
			printf("You utter nonsense!!!! Made chun kali in my face. Go out forever!!!!!!!!!!!!!!!!!");
			break;

			// break;

		default:
			printf("What!!!!!???????????????");
			break;
		}
		break;
	case 10000:
		printf("Ohh! The oldest man alive!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!");
		break;
	default:
		printf("Pagal tu to bara hi chalak nikla");
		break;
	}
	return 0;
}
>>>>>>> 74682ba (Done till break statements in C, continue is still left)

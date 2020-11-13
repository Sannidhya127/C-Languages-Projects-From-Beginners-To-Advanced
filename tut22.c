/* Exercise of Units and Conversions

kms to miles
inches to foot
cms to inches
pound to kgs
inches to meters

*/
#include <stdio.h>

float kmsTomls(float num)
{
	printf("Enter the number in Kms to convert it in to miles: ");
	scanf("%f\n", &num);
	printf("%f Km when converted to miles becomes %f miles", num, num * 0.62137);
	return kmsTomls(num * 0.62137);
}

float inchTofoot(float num)
{
	printf("Enter the number in inches to convert it into foot: ");
	scanf("%f\n", &num);
	float DecFeet = num / 12;
	printf("%f\n", DecFeet);
	// float feet =
	// printf("%d", )
}

float cmsToInches(float num)
{
	// printf("")
	printf("Enter the value in Centimetres to get the output in Inches: ");
	scanf("%f\n", &num);
	return num * 0.39;
}

float poundsTokgs(float num)
{
	printf("Enter the value in pouds to get the output in Kilograms: ");
	scanf("%f\n", &num);
	return num / 2.2046;
}

float inchTometres(float num)
{
	printf("Enter the value in Inches to get the output in Metres: ");
	scanf("%f\n", &num);
	// printf("")
	return num * 0.0254;
}
int main(int argc, char const *argv[])
{
	int number, q;
	float result;
	printf("Welcome to Sanni's Convertion Palace\n");
	printf("Enter the number of the conversion to use it:\n1. Kilometres to miles\n2. Inches to Foot\n3. Centimtres to Inches\n4. Punds to Kilograms\n5. Inches to Metres\n\n");
	printf("Enter your choice:\n");
	scanf("%d\n", &q);
	printf("Click enter to continue\n");
	switch (q)
	{
	case 1:
		// printf("Enter the number in Kms to convert it in to miles: ");
		// scanf("%f\n", &number);
		result = kmsTomls(number);
		printf("%f\n", result);
		break;

	default:
		break;
	}

	return 0;
}

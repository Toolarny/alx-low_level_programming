#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - Entry point of the program
*
* Description:
* This program generates a random number and prints the last digit of the number.
* The output includes the original number, followed by the description of the last digit.
* The description indicates whether the last digit is greater than 5, equal to 0, or less than 6 and not 0.
* Return: Always 0 (Success)
*/
int main(void)
{
	int n;
	int lastDigit;

	srand(time(NULL));
	n = rand();
	lastDigit = n % 10;

	printf("The last digit of %d is ", n);

	if (lastDigit > 5)
		printf("and is greater than 5\n");
	else if (lastDigit == 0)
		printf("and is 0\n");
	else
		printf("and is less than 6 and not 0\n");

	return (0);
}

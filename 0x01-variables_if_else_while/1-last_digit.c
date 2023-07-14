#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - Entry point of the program
* Description:
* This program assigns a random number to the variable n and prints its last digit
* along with a corresponding description.
* Return: Always 0 (Success)
*/
int main(void)
{
	int n;
	int last_digit;

	srand(time(NULL));
	n = rand();
	last_digit = abs(n % 10);

	printf("Last digit of %d is %d and is ", n, last_digit);

	if (last_digit > 5)
		printf("greater than 5\n");
	else if (last_digit == 0)
		printf("0\n");
	else
		printf("less than 6 and not 0\n");

	return (0);
}

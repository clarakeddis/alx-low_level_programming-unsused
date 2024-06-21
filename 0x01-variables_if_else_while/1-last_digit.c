#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints the last digit
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int last_digit;

srand(time(0)); /* Initialize random seed */
n = rand() - RAND_MAX / 2; /* Assign random value to n */
last_digit = n % 10; /* Get the last digit */

	/* Print the last digit and its properties */
	printf("Last digit of %d is %d and is ", n, last_digit);

	if (last_digit > 5)
		printf("greater than 5\n");
	else if (last_digit == 0)
		printf("0\n");
	else
		printf("less than 6 and not 0\n");

return (0);
}

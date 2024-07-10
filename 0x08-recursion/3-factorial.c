#include "main.h"

/**
 * factorial - Computes the factorial of a number recursively
 * @n: The number to compute the factorial of
 *
 * Return: The factorial of n, or -1 if n is negative (error)
 */
int factorial(int n)
{
if (n < 0)
return (-1); /*Factorial of a negative number is undefined, -1 for error*/
if (n == 0 || n == 1)
return (1); /*Factorial of 0 and 1 is 1*/
return (n * factorial(n - 1)); /*Recursive call to compute factorial*/
}

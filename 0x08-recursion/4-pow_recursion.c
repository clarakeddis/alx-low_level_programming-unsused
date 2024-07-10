/**
 * _pow_recursion - Computes the power of a number recursively
 * @x: The base
 * @y: The exponent
 *
 * Return: The value of x raised to the power of y,
 *         or -1 if y is negative.
 */
int _pow_recursion(int x, int y)
{
/* Base case: if y is negative, return -1 */
if (y < 0)
return (-1);
/* Base case: if y is 0, return 1 (any number to the power of 0 is 1) */
else if (y == 0)
return (1);
/* Base case: if y is 1, return x (any number to the power of 1 is itself) */
else if (y == 1)
return (x);
/* Recursive case: x^y = x * x^(y-1) */
else
return (x * _pow_recursion(x, y - 1));
}

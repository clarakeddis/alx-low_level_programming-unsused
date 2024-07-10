/**
 * _sqrt_recursion - Computes the natural square root of a number recursively
 * @n: The number to find the square root of
 *
 * Return: The natural square root of n
 */
int _sqrt_recursion(int n)
{
/* Base case: if n is less than 0, return -1 (no natural square root) */
if (n < 0)
return (-1);
/* Base case: if n is 0 or 1, return n (square root is itself) */
if (n == 0 || n == 1)
return (n);
/* Recursive case: Find the square root using binary search */
return (_sqrt_helper(n, 1, n));
}

/**
 * _sqrt_helper - Helper function to find the square root using binary search
 * @n: The number to find the square root of
 * @start: The starting point for the search
 * @end: The ending point for the search
 *
 * Return: The natural square root of n
 */
int _sqrt_helper(int n, int start, int end)
{
/* Base case: if start meets or exceeds end, return -1 */
if (start > end)
return (-1);
int mid = (start + end) / 2;
int mid_squared = mid * mid;
/* Base case: if mid_squared is equal to n, mid is the square root */
if (mid_squared == n)
return (mid);
/* Recursive cases based on the comparison of mid_squared and n */
if (mid_squared > n)
return (_sqrt_helper(n, start, mid - 1));
else
return (_sqrt_helper(n, mid + 1, end));
}

#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to be converted.
 *
 * Return: The converted integer.
 */
int _atoi(char *s)
{
int sign = 1; /* Initialize sign as positive */
int result = 0;
int i = 0;
/* Skip leading whitespace */
while (s[i] == ' ')
i++;
/* Check for sign */
if (s[i] == '-')
{
sign = -1;
i++;
}
else if (s[i] == '+')
{
i++;
}
/* Process digits and convert to integer */
while (s[i] >= '0' && s[i] <= '9')
{
/* Handle overflow conditions based on the sign */
int digit = s[i] - '0';
/* Check for overflow before updating result */
if (sign == 1 && (result > INT_MAX / 10 ||
(result == INT_MAX / 10 && digit > INT_MAX % 10)))
{
return (INT_MAX);
}
else if (sign == -1 && (result > INT_MAX / 10 ||
(result == INT_MAX / 10 && digit > -(INT_MIN % 10))))
{
return (INT_MIN);
}
/* Update result */
i++;
}
return (result);
}

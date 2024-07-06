#include "main.h"

/**
 * leet - Encodes a string into 1337.
 * @str: The string to encode.
 *
 * Return: A pointer to the encoded string.
 */
char *leet(char *str)
{
int i;
char *ptr = str;
char leet_letters[] = "aAeEoOtTlL";
char leet_numbers[] = "43071";
while (*ptr != '\0')
{
for (i = 0; i < 10; i++)
{
if (*ptr == leet_letters[i])
{
*ptr = leet_numbers[i / 2];
break;
}
}
ptr++;
}
return (str);
}

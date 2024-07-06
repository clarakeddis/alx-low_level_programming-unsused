#include "main.h"

/**
 * rot13 - Encodes a string using rot13.
 * @str: The string to encode.
 *
 * Return: A pointer to the encoded string.
 */
char *rot13(char *str)
{
char *ptr = str;
char rot13_a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
int i;
while (*ptr != '\0')
{
for (i = 0; i < 52; i++)
{
if (*ptr == rot13_a[i])
{
*ptr = rot13_b[i];
break;
}
}
ptr++;
}
return (str);
}

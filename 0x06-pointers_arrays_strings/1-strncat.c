#include "main.h"

/**
 * _strncat - Concatenates two strings up to n bytes from src.
 * @dest: The destination string.
 * @src: The source string.
 * @n: The number of bytes from src to be appended to dest.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
char *d = dest;
char *s = src;
while (*d != '\0')
{
d++;
}
while (n-- && *s != '\0')
{
*d++ = *s++;
}
*d = '\0';
return (dest);
}

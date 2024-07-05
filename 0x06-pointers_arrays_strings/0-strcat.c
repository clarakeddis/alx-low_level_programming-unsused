#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: The destination string.
 * @src: The source string.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
char *d = dest;
char *s = src;
/* Find the end of dest string */
while (*d != '\0')
{
d++;
}
/* Append src to dest */
while (*s != '\0')
{
*d = *s;
d++;
s++;
}
/* Add the terminating null byte */
*d = '\0';
return (dest);
}

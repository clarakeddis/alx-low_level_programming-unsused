#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: The destination string.
 * @src: The source string.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strcat(char *dest, const char *src)
{
char *ptr = dest;
/* Move the pointer to the end of dest string */
while (*ptr != '\0')
{
ptr++;
}
/* Append src to dest */
while (*src != '\0')
{
*ptr = *src;
ptr++;
src++;
}
/* Add the terminating null byte */
*ptr = '\0';
return (dest);
}

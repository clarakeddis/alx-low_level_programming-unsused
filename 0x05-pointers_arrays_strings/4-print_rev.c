#include "main.h"

/**
 * print_rev - Prints a string in reverse, followed by a new line.
 * @s: Pointer to the string to be printed.
 */
void print_rev(char *s)
{
int len = 0;
while (*s != '\0')
{
len++;
s++;
}
s--; /* Move s back to point to the last character */
while (len > 0)
{
_putchar(*s);
s--;
len--;
}
_putchar('\n'); /* Print a newline at the end */
}

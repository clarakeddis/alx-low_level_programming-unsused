#include "main.h"

/**
 * puts_half - Prints half of a string, followed by a new line.
 * @str: Pointer to the string to be printed.
 *
 *If the number of characters is odd, prints the last n characters
 * where n = (length_of_the_string - 1) / 2.
 */
void puts_half(char *str)
{
int length = 0;
int i, start_index;
/* Calculate the length of the string */
while (str[length] != '\0')
{
length++;
}
/* Determine the starting index for printing */
if (length % 2 == 0)
{
start_index = length / 2;
}
else
{
start_index = (length - 1) / 2 + 1;
}
/* Print characters from start_index to the end of the string */
for (i = start_index; i < length; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}

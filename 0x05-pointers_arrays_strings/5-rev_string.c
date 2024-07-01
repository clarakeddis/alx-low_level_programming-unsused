#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: Pointer to the string to be reversed.
 */
void rev_string(char *s)
{
int len = 0;
int start = 0;
char temp;
/* Calculate the length of the string */
while (s[len] != '\0')
len++;
len--; /* Adjust length to index of last character */
/* Swap characters from start to end */
while (start < len)
{
temp = s[start];
s[start] = s[len];
s[len] = temp;
start++;
len--;
}
}

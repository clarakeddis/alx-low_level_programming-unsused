#include "main.h"
/**
 * print_sign - checks for positive and negative or zero
 * @n: the character to be checked
 * Return: always 0
 */

int print_sign(int n)
{

	if (n > 0)
	{
	_putchar(43);
	return (1);
	}
	else if (n < 0)
	{
	_putchar(45);
	return (-1);
	}
	else
{
_putchar(48);
return (0);
	}
}

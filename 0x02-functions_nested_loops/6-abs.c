#include "main.h"
/**
 * _abs - compute abs value
 * @c: the character to be checked
 * Return: always 0
 */

int _abs(int c)
{
	if (c < 0)
	{
		int abs_val;

		abs_val = c * -1;

		return (abs_val);
	}
	return (c);
}

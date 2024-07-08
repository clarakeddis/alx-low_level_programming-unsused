#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: pointer to a pointer to a char (string)
 * @to: pointer to a char (string) to set s to
 *
 * Description: The function sets the value of a pointer to a char.
 */
void set_string(char **s, char *to)
{
*s = to;
}

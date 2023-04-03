#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: value to be used
 * @to: pointer whose value will be changed
 */
void set_string(char **s, char *to)
{
	*s = to;
}

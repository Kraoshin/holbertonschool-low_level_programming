#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: char pointer pointing to memory adress of another char pointer
 * @to: pointer to the memory adress of a value
 */

void set_string(char **s, char *to)
{
		*s = to;
}

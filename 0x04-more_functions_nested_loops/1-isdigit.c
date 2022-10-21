#include "main.h"

/**
 * _isdigit - A function that checks for a digit 0 through 9
 * @c: the digit to be checked
 * Return: 1 if characters are digit, 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);

	return (0);
}

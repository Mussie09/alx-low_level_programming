#include "main.h"

/**
 * _isupper - A function that checks for uppercase character.
 * @c: An input character
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _isupper(int c)
{
	for (c = 'A'; c <= 'Z'; c++)
	{
		if (c == 'C')
		return (1);
	}
	else
	{
		return (0);
	}
}

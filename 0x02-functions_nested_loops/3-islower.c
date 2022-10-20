#include "main.h"

/**
 * _islower - check if character is lowercase or not
 * @c: character to check
 * Return: 1 if c is lowercase, 0 if otherwise
 */

int _islower(int c)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)

		return (1);
	}
	else
		return (0);
}

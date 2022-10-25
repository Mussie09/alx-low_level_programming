#include "main.h"

/**
 * puts_half - a function that prints half of a string
 * followed by a new line
 * @str: an input string
 * Return: Always 0
 */
void puts_half(char *str)
{
	int len = 0, i, n;

	while (str[len] != '\0')
		len++;

	if (len % 2 == 2)
		n = len / 2;

	else
		n = (len + 1) / 2;

	for (i = n; i < len; i++)
		_putchar(str[i]);

	_putchar('\n');
}

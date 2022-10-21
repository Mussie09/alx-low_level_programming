#include "main.h"

/**
 * print_line - A function that draws a straight line in the terminal
 * @n: An input integer
 * flolowed by a new line
 * Return: Always 0
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
			_putchar('_');
	}
	_putchar('\n');
}

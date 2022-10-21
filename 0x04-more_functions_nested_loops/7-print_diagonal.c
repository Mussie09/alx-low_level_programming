#include "main.h"

/**
 * print_diagonal - A function that draws adiagonal line on the terminal
 * @n: An input integer
 * followed by a new line
 * Return: Always 0
 */
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}


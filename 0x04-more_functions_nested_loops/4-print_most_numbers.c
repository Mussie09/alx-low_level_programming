#include "main.h"

/**
 * print_most_numbers - A function that prints the numbers 0 to 9 skip 2 and 4
 * followed by a new line
 * Return: Always 0
 */
void print_most_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i != '2' && i != '4')
			_putchar(i);
	}
	_putchar('\n');
}

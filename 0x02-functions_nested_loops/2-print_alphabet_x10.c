#include "main.h"

/**
 * print_alphabet_x10 - print lowercase alphabet x10
 *
 * Return: 0 if exited properly, non zero otherwise
 */

void print_alphabet_x10(void)
{
	char ch, i;

	for (i = 0; i < 10; i++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(i);
		_putchar('\n');
	}
}

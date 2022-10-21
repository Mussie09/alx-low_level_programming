#include "main.h"

/**
 * print_number - A function that prints an integer without long, arrays, or pointer
 * @n: An input integer
 * Return: Always 0
 */
void print_number(int n)
{
	unsigned int tens, digit, positive = n;
	double t_beg = 1;

	if (n == 0)
		_putchar('0');
	else
	{
		if (n < 0)
		{
			positive = n * -1;
			_putchar('-');
		}

		while (t_beg <= positive)
			t_beg *= 10;
		tens = t_beg / 10;

		while (tens >= 1)
		{
			digit = positve / tens;
			_putchar(digit + '0');
			positive = (positive - (tens * digit));
			tens /= 10;
		}
	}
}

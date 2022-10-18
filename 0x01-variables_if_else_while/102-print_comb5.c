#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int s, m;

	for (s = 0; s <= 98; s++)
	{
		for (m = s + 1; m <= 99; m++)
		{
			putchar((s / 10) + '0');
			putchar((s % 10) + '0');
			putchar(' ');
			putchar((m / 10) + '0');
			putchar((m % 10) + '0');
			if (s == 98 && m == 99)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}


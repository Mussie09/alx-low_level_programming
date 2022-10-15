#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int s, m;

	for (s = '0'; s < '9'; s++)
	{
		for (m = s + 1; m <= '9'; m++)
		{
			if (m != s)
			{
				putchar(s);
				putchar(m);

				if (s == '8' && m == '9')
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}

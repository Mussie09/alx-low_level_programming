#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main -entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int s, m, t;

	for (s = '0'; s < '9'; s++)
	{
		for (m = s + 1; m <= '9'; m++)
		{
			for (t = m + 1; t <= '9'; t++)
			{
				if ((m != s) != t)
				{
					putchar(s);
					putchar(m);
					putchar(t);

					if (s == '7' && m == '8')
						continue;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}

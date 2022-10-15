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
	int s;

	for (s = '0'; s <= '9'; s++)
		putchar(s);
	putchar('\n');

	return (0);
}

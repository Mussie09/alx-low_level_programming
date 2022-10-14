#include <stdio.h>
/* more headers goes here*/

/* betty style doc for function main goes there */

/**
 * main - entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
		putchar('\n');

	return (0);
}

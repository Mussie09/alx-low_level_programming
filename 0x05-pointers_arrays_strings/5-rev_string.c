#include "main.h"

/**
 * rev_string - a function that reverses a string
 * @s: an input string
 * Return: Always 0
 */
void rev_string(char *s)
{
	char m;
	int len = 0, i = 0;

	while (s[len] != '\0')
		len++;
	{
		m = s[i];
		s[i++] = s[len];
		s[len] = m;
	}
}

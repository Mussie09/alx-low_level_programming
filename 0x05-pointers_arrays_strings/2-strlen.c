#include "main.h"

/**
 * _strlen - a function that returns the length of a string
 * @s: A string integer
 * Return: Always 0
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}

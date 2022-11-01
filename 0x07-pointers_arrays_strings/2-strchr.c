#include "main.h"
#include <stdio.h>

/**
 * *_strchr - a function that locates a character in a string.
 * @s: an input string to search in
 * @c: char to find
 * Return: a pointer to the first occurance of the character c
 * in the string s, or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (c == *s)
			return (s);
		s++;
	}
	if (c == *s)
		return (s);
	return (NULL);
}

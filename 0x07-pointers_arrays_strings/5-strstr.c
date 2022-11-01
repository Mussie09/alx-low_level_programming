#include "main.h"
#include <stdio.h>

/**
 * *_strstr - a function that locates a substring
 * @haystack: string to look in
 * @needle: substring to look for
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0;

	for (; haystack[i] != '\0'; i++)
	{
		for (; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}
		if (!needle[j])
			return (&haystack[i]);
	}
	return (NULL);
}

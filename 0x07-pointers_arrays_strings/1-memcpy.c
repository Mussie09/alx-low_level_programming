#include "main.h"

/**
 * _memcpy - a function that copies memory area
 * @dest: memory area destination to copy
 * @src: memory area source to copy from
 * @n: number of bytes to be copied
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

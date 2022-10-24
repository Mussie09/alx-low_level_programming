#include "main.h"
#include <stdio.h>

/**
 * swap_int - A function that swaps the values of two integers
 * @a: first integer pointer
 * @b: second integer pointer
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}

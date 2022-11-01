#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - a function that prints the sum of two diagonals
 * of a square matrix of integers.
 * @a: a square matrix of integers.
 * @size: an input integer with the matrix size
 * Return: Always 0
 */
void print_diagsums(int *a, int size)
{
	int diagonal_sum_1 = 0;
	int diagonal_sum_2 = 0;
	int row, i;

	for (row = 0; row < size; row++)
	{
		i = (row * size) + row;
		diagonal_sum_1 += a[i];
	}

	for (row = 1; row <= size; row++)
	{
		i = (row * size) - row;
		diagonal_sum_2 += a[i];
	}

	printf("%d, %d\n", diagonal_sum_1, diagonal_sum_2);
}

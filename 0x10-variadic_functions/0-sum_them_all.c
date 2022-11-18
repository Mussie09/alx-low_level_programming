#include "variadic_functions.h"

/**
 * sum_them_all - a function that calculates the sum of all its parameters
 * @n: number of arguments lassed to the function
 * Return: the resulting sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0;
	int sum = 0;
	va_list list;

	va_start(list, n);

	for (; i < n; i++)
		sum += va_arg(list, int);

	va_end(list);

	return (sum);
}

#include "variadic_functions.h"

/**
 * print_numbers - a function that prints numbers given as parameters
 * followed by new line
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list list;

	va_start(list, n);

	for (; i < n; i++)
	{
		if (!separator)
			printf("%d", va_arg(list, int));

		else if (separator && i == 0)
			printf("%d", va_arg(list, int));
		else
			printf("%s%d", separator, va_arg(list, int));
	}
	va_end(list);

	printf("\n");
}

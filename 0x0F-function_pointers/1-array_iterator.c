#include <stdlib.h>

/**
 * array_iterator - a function that excutes a function given as a parameter
 * on each element of an array.
 * @array: Apointer to array
 * @size: Size of the array
 * @action: action(function) to iterate throw array
 * Return: Always 0 (success)
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i  = 0;

	if (action == NULL || array == NULL)
		return;

	for (; i < size; i++)
		action(array[i]);
}

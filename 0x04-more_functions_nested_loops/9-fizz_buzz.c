#include <stdio.h>

/**
 * main - A program that writes from 1 to 100
 * But for multiples of 3 prints Fizz instead of the number
 * And for the multiples of 5 prints Buzz
 * followed by a new line
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz ");
		else
			("%d ", i);
	}
	printf("\n");
	return (0);
}

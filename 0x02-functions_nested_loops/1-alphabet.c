#include "main.h"

/**
 * alphabets - prints alphabets in lowercase
 * Return: 0 if exited properly, non zero otherwise
 */
void print_alphabet(void)
{
	char ch;
	
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}

#include "holberton.h"


void print_alphabet_x10(void)
{
	int n, count;

	count = 0;

	while (count < 10)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			_putchar(n);
		}
		count++;
		_putchar('\n');
	}
}

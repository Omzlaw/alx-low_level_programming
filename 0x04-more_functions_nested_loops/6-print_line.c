#include "main.h"

void print_line(int n)
{
	int col;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (col = 1; col <= n; col++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}

#include "main.h"


void print_diagonal(int n)
{
	int col, space;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (col = 1; col <= n; col++)
		{
			for (space = 1; space < col; space++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}

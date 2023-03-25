#include "main.h"

void print_triangle(int size)
{
	int space, row, tri;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 0; row <= (size - 1); row++)
		{
			for (space = 0; space < (size - 1) - row; space++)
			{
				_putchar(' ');
			}
			for (tri = 0; tri <= ro; tri++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}

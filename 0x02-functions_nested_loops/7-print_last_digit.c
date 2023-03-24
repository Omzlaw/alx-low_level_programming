#include "main.h"


int print_last_digit(int num)
{
	int lastDigit;

	lastDigit = (num % 10);

	if (lastDigit < 0)
	{
		lastDigit = (-1 * lastDigit);
	}

	_putchar(lastDigit + '0');
	return (lastDigit);
}

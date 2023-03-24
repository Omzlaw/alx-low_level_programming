#include "main.h"


int main(void)
{
	char *character = "_putchar";

	while (*character)
	{
		_putchar(*character);
		character++;
	}
	_putchar('\n');

	return (0);
}

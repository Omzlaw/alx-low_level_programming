#include "main.h"


/**
 * leet - Encodes a string to 1337.
 * @str: The string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */

char *leet(char *str)
{
	int strIndex = 0, leetIndex;
	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (str[strIndex])
	{
		for (leetIndex = 0; leetIndex <= 7; leetIndex++)
		{
			if (str[strIndex] == leet[leetIndex] ||
			    str[strIndex] - 32 == leet[leetIndex])
				str[strIndex] = leetIndex + '0';
		}

		strIndex++;
	}

	return (str);
}

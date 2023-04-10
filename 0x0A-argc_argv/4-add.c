#include <stdio.h>
#include <stdlib.h>


/**
 * main - Prints the addition of positive numbers,
 *        followed by a new line.
 * @argc: The number of arguments passed to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: If one of the numbers contains symbols that are non-digits - 1.
 *         Otherwise - 0.
 */


int main(int argc, char *argv[])
{

	int numCount;
	int digitCount;
	int sum;

	for (numCount = 1; numCount < argc; numCount++)
	{
		for (digitCount = 0; argv[numCount]; digitCount++)
		{
			if (argv[numCount][digitCount] < '0' || argv[numCount][digitCount] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[numCount]);
	}

	printf("%d\n", sum);

	return (0);

}

#include "main.h"
#include <stdlib.h>


/**
 * alloc_grid - Returns a pointer to a 2-dimensional array of
 *               integers with each element initalized to 0.
 * @width: The width of the 2-dimensional array.
 * @height: The height of the 2-dimensional array.
 *
 * Return: If width <= 0, height <= 0, or the function fails - NULL.
 *         Otherwise - a pointer to the 2-dimensional array of integers.
 */


int **alloc_grid(int width, int height)
{
	int **twoDArray;
	int height_index, width_index;

	if (width <= 0 || height <= 0)
		return (NULL);

	twoDArray = malloc(sizeof(int *) * height);

	if (twoDArray == NULL)
		return (NULL);

	for (height_index = 0; height_index < height; height_index++)
	{
		twoDArray[height_index] = malloc(sizeof(int) * width);

		if (twoDArray[height_index] == NULL)
		{
			for (; height_index >= 0; height_index--)
				free(twoDArray[height_index]);

			free(twoDArray);
			return (NULL);
		}
	}

	for (height_index = 0; height_index < height; height_index++)
	{
		for (width_index = 0; width_index < width; width_index++)
			twoDArray[height_index][width_index] = 0;
	}

	return (twoDArray);
}

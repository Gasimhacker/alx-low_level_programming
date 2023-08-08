#include <stdlib.h>
/**
 * alloc_grid - Create a 2d array of zeros
 * @width: The width of the array
 * @height: The height of the array
 *
 * Return: A pointer to the 2d array, or NULL if it fails
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **arr;

	if ((width * height) <= 0)
		return (0);

	arr = malloc(height * sizeof(int *));

	if (arr == 0)
		return (arr);

	for (i = 0; i < height ; i++)
	{
		arr[i] = malloc(width * sizeof(int));

		if (arr[i] == 0)
		{
			free(arr);
			return (0);
		}

		for (j = 0; j < width; j++)
			arr[i][j] = 0;
	}

	return (arr);
}

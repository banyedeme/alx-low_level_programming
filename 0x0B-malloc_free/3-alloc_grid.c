#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Returns a pointer to a two dimensional array of i
 * @width: width input
 * @height: height input
 * Return: returns Null if width or height is 0 or negative

 */

int **alloc_grid(int width, int height)

{

	int **papa;

	int m, n;



	if (width <= 0 || height <= 0)

		return (NULL);



	papa = malloc(sizeof(int *) * height);



	if (papa == NULL)

		return (NULL);



	for (m = 0; m < height; m++)

	{

		papa[m] = malloc(sizeof(int) * width);



		if (papa[m] == NULL)

		{

			for (; m >= 0; m--)

				free(papa[m]);



			free(paoa);

			return (NULL);

		}

	}



	for (m = 0; m < height; m++)

	{

		for (n = 0; n < width; n++)

			papa[m][n] = 0;

	}



	return (papa);

}


#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - the code
 * @width: parameter width
 * @height: parameter height
 * Return: Always 0.
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int w = 0;
	int h = 0; 
	grid = malloc(sizeof(**grid) * width * height + 1);

	if (width <= 0 || height <= 0 || !grid)
	{
		return (NULL);
	}
	else
	{
		while (h < height)
		{
			w = 0;
			while (w < width)
			{
				printf("%d", grid[0][0]);
				w++;
			}
			h++;
		}
		return (0);
	}
}

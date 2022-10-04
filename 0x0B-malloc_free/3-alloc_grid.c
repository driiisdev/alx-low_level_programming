#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - creates a 2 dimensional array of integers initialized to 0
 * @width: width of array
 * @height: height of array
 *
 * Return: a pointer to the 2D array
 */
int **alloc_grid(int width, int height)
{
    int **grid;
    int r, c;

    if (width <= 0 || height <= 0)
		return (NULL);
    
    grid = (int *)malloc(sizeof(int) * height);

    if (grid == NULL)
    {
        return(NULL);
    }

    for (r = 0; r < height; r++)
    {
        grid[r] = (int *)malloc(sizeof(int) * width);

        while (grid[r] == NULL)
		{
			for (c = 0; c < r; c++)
				free(grid[c]);
			free(grid);
			return (NULL);
		}
        for (c = 0; c < width; c++)
		{
			grid[r][c] = 0;
		}
    }
    
    return (grid);
}

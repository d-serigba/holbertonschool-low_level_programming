#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2D array of integers
 * @width: number of columns
 * @height: number of rows
 *
 * Return: pointer to the 2D array, or NULL on failure
 */
int **alloc_grid(int width, int height)
{
    int **grid;
    int i, j;

    if (width <= 0 || height <= 0)
        return (NULL);

    /* Allocate memory for the array of row pointers */
    grid = malloc(sizeof(int *) * height);
    if (grid == NULL)
        return (NULL);

    /* Allocate memory for each row */
    for (i = 0; i < height; i++)
    {
        grid[i] = malloc(sizeof(int) * width);
        if (grid[i] == NULL)
        {
            /* Free previously allocated rows on failure */
            while (i > 0)
            {
                i--;
                free(grid[i]);
            }
            free(grid);
            return (NULL);
        }

        /* Initialize each element to 0 */
        for (j = 0; j < width; j++)
            grid[i][j] = 0;
    }

    return (grid);
}

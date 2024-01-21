#include<stdio.h>
#include<stdlib.h>
#include "main.h"

/**
*free_grid - frees dimensional array
*@grid: dimensional grid, 'double pointer'
*@height: height dimensional of grid
*Return: void, nothing
*/

void free_grid(int **grid, int height)
{
	int i;
	
	for(i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}

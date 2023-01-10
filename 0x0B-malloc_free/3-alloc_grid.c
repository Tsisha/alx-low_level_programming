#include "main.h"
/**
 * alloc_grid - returns to 2 dimensional array of integers.
 *@width: width oàf array
 *@height: height of array
 *Return: pointer to the array
 */
int **alloc_grid(int width, int height)
{
int **z;
int x = 0, y;
if (width == 0 || height == 0)
return (NULL);
z = (int **) malloc(sizeof(int *) * height);
if (z != NULL)
{
for (; x < height; x++)
{
z[x] = (int *) malloc(sizeof(int) * width);
if (z[x] != NULL)
{
for (y = 0; y < width; y++)
z[x][y] = 0;
}
else
{
while (x >= 0)
{
free(z[x]);
x--;
}
free(z);
return (NULL);
}
}
return (z);
}
else
{
return (NULL);
}
}

#include "main.h"
/**
 * *array_range -  create an array of integers
 * @min: array
 * @max: char
 * Return: NULL
 */
int *array_range(int min, int max)
{
int *x;
int y, z = 0;
if (min > max)
return (NULL);
x = malloc(sizeof(*x) * ((max - min) + 1));
if (x != NULL)
{
for (y = min; y <= max; y++)
{
x[z] = y;
z++;
}
return (x);
}
else
return (NULL);
}

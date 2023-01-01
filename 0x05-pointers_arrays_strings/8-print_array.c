#include "main.h"
#include <stdio.h>
/**
 * print_array - print an array.
 * @a: array
 * @n: number of array's elements
 */
void print_array(int *a, int n)
{
int x;
for (x = 0; x < n; x++)
{
printf("%d", a[x]);
if (x != n - 1)
{
printf(", ");
}
}
printf("\n");
}

#include "main.h"
#include <stdio.h>
/**
 * print_square - print square, followed by a new line
 * @z: the number of line using # to print the suare
 * Return: void
 */
void print_square(int z)
{
int x;
int y;
for (y = 0; y < z; y++)
{
for (x = 0; x < z; x++)
{
_putchar('#');
}
_putchar('\n');
}
if (x <= 0)
{
_putchar('\n');
}
}

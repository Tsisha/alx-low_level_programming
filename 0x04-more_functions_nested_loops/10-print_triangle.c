#include "main.h"
#include <stdio.h>
/**
 * print_triangle - prints a triangel, followed by a new line
 * @n: the number of lines using '#' to print a triangle
 * Return: void
 */
void print_triangle(int n)
{
int x;
int y;
int z;
for (y = 0; y < n; y++)
{
for (x = 0; x < n; x++)
{
for (z = 0; z < n; z++)
{
_putchar('#');
}
_putchar('\n');
}
if (n <= 0)
{
_putchar('\n');
}
}
}

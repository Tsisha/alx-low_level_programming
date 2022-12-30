#include "main.h"
/**
 * print_triangle - prints a triangel, followed by a new line
 * @n: the number of lines using '#' to print a triangle
 * Return: void
 */
void print_triangle(int n)
{
if (n <= 0)
{
putchar('\n');
} else
{
int x;
int y;
for (y = 1; y <= n; y++)
{
for (x = 1; x < n; x++)
{
_putchar(' ');
}
for (x = 1; x <= y; x++)
{
_putchar('#');
}
_putchar('\n');
}
}
}

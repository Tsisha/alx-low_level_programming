#include "main.h"
#include <stdio.h>
/**
 * print_diagonal - drow a diagonal line
 * @n: the number of times the character \ should be printed
 * Return: void
 */
void print_diagonal(int n)
{
int x;
int y;
for (x = 0; x < n; x++)
{
for (y = 0; y < x; y++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
if (n <= 0)
{
_putchar('\n');
}
}

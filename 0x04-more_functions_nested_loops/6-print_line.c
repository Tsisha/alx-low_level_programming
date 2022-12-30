#include "main.h"
#include "stdio.h"
/**
 * print_line - a function that drows a straight line in the terminal
 * @n: the number of '_' characters to be printed
 * Return: void
 */
void print_line(int n)
{
int x;
for (x = 0; x < n; x++)
{
_putchar('_');
}
_putchar('\n');
}

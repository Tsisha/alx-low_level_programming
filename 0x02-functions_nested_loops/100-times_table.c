#include "main.h"

/**
 * times_table - prints n times table, starting with 0
 * @n: the number to be treated
 * Return: empty output
 */ 
void print_times_table(int n)
{
int x, y, z;
if (n >= 0 && n <= 14)
{
for (x = 0; x <= n; x++)
{
_putchar('0');
for (y = 1; y <= n; y++)
{
_putchar(',');
_putchar(' ');
z = x * y;
if (z <= n)
_putchar(' ');
else
_putchar((z / 10) + '0');
_putchar((z % 10) + '0');
}
_putchar('\n');
}
}
}

#include "main.h"
#include <stdio.h>
/**
 * print_number - prints an integer
 * @x: integer to print
 * Return: Nothing!
 */
void print_number(int x)
{
unsigned int x1 = 0;
if (x < 0)
{
x1 = -x;
_putchar('_');
}
else
{
x1 = x;
}
if (x1 / 10)
{
print_number(x1 / 10);
}
_putchar((x1 % 10) + '0');
}

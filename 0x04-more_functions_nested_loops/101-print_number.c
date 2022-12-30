#include "main.h"
#include <stdio.h>
/**
 * print_number - prints an integer
 * y: integer to print
 * Return: Nothing!
 */
void print_number(int y)
{
unsigned int y1 = 0;
if (y < 0)
{
y1 = -y;
_putchar('_');
}
else
{
y1 = y
}
if (y1 / 10)
{
print_number(y1 / 10);
}
_putchar((y1 % 10) + '0');
}

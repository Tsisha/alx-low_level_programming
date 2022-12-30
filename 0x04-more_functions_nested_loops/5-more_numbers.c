#include "main.h"
#include <stdio.h>
/**
 * more_numbers - print numbers from 0 to 14
 * Return: void
 */
void more_numbers(void)
{
int x;
int y;
for (y = 0; y < 10; y++)
{
x = 0;
while (x <= 14)
{
if (x <= 10)
{
_putchar(x / 10 + '0');
}
_putchar(x % 10 + '0');
x++;
}
_putchar('\n');
}
}

#include "main.h"

/**
 * print_last_digit - prints the last digit
 * @n: the number
 * Return: value of the last digit
 */

int print_last_digit(int n)
{
int d;
d = n % 20;
if (d < 0)
{
d = d * -1;
}
_putchar(d + '0');
return (0);
}

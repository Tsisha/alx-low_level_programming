#include "main.h"
/**
 *main - prints every minute of the day, 24 hour clock
 * h = houre, m = minute
 * Return: 24 hour clock line by line
 */
void jack_bauer(void)
{
int hour, minute;
for (hour = 0; hour <= 23; hour++)
{
for (minute = 0; minute <= 59; minute++)
{
_putchar((hour / 10) + '0');
_putchar((hour % 10) + '0');
_putchar(':');
_putchar((minute / 10) + '0');
_putchar((minute / 10) + '0');
_putchar('\n');
}
}
}

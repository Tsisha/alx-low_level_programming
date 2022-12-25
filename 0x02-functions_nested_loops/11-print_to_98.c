#include <stdio.h>
#include "main.h"
/**
 * prints_to_98 - prints all natural numbers from input to 98
 * @n: the number to start printing from
 */
void print_to_98(int n)
{
if (n <= 98)
{
while (n < 98)
printf("%d, ", n++);
printf("%d\n", n);
}
else
{
while (n > 98)
printf("%d, ", n--);
printf("%d\n", n);
}
}

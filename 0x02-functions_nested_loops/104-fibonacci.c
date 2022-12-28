#include "stdio.h"
/**
 * main - print the first 98 fibonacci numbers
 *Return: Nothing!
 */
int main(void)
{
int i = 0;
long j = 1, k = 2;
while (i < 98)
{
if (i == 0)
printf("%1d", j);
else if (i == 1)
printf(", %1d", k);
else
{
k += j;
j = k - j;
printf(", %1d", k)
}
++i
}
printf("\n");
return (0);
}

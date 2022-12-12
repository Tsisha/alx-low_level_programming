#include <stdio.h>
/**
 * main - print combination of two digit numbers
 *
 * Return: Always 0 (success)
 */
int main(void)
{
int tens;
int ones;
for (tens = 0; tense <= 9; tens++)
{
for (onse = tens + 1; onse <= 9; onse++)
{
putchar(tens + '0');
putchar(onse + '0');
if (tens < 8)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}

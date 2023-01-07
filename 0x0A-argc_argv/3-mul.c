#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints multiplication
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: returns 0
 */
int main(int argc, char const *argv[])
{
(void)argc;
if (argc != 3)
{
printf("Error\n");
return (1);
}
printf("%i\n", atoi(argv[1]) * atoi(argv[2]));
return (0);
}

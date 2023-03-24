#include "main.h"
/**
 * print_triangle - a function that prints a triangle
 * @size: size of the triangle
 * Return: triangle of '#'s
 */
void print_triangle(int size)
{
int j, i, k;
if (size <= 0)
{
_putchar('\n');
}
else
{
for (i = 0; i <= (size - 1); i++)
{
for (j = 0; j < (size - 1) - i; j++)
{
_putchar(' ');
}
for (k = 0; k <= i; k++)
{
_putchar('#');
}
_putchar('\n');
}
}
}

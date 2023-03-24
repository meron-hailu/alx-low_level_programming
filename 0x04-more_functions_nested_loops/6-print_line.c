#include "main.h"
/**
 * print_line - a function that draws a straight line in the terminal
 * @k: input which is the number of times to print '_'
 * Return: a straight line using '_'
 */
void print_line(int k)
{
int i;
if (k <= 0)
{
_putchar('\n');
}
else
{
for (i = 1; i <= k; i++)
{
_putchar('_');
}
_putchar('\n');
}
}

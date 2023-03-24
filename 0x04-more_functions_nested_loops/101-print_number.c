#include <stdio.h>
#include "main.h"
/**
 * print_number is a function which prints an integer
 * @n is an argument of int type
 */
void print_number(int n)
{
if (n < 0)
{
_putchar('-');
n = -n;
}
if (n > 9)
{
print_number(n / 10);
}
_putchar((n % 10) + '0');
}

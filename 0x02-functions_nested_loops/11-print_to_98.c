#include <stdio.h>
#include "main.h"
/**
 * print_number: which prints the numbers
 * print_to_98: a function that returns from n to 98
 * @n: is the int that will use for the argument of the function
 * Return: 0
 */
void print_number(int n)
{
if (n >= 0 && n < 10)
{
_putchar(n + '0');
}
else if (n >= 10)
{
print_number(n / 10);
putchar(n % 10 + '0');
}
else
{
_putchar('-');
print_number(-n);
}
}

void print_to_98(int n)
{
if (n <= 98)
{
print_number(n);
if (n < 98)
{
_putchar(',');
_putchar(' ');
print_number(n + 1);
}
else
{
_putchar('\n');
}
}
}

#include <stdio.h>
#include "main.h"
/**
 * times_table - function which prints the 9x table
 * Return: 0
 */
void times_table(void)
{
int j;
int i;
_putchar('0');
_putchar(',');
for (i = 0; i < 10; i++)
{
_putchar(i + '0');
_putchar(',');
}
_putchar('0');
_putchar('\n');
for (i = 0; i < 10; i++)
{
_putchar(i + '0');
_putchar(',');
for (j = 0; j < 10; j++)
{
int prod = i * j;
if (prod < 10)
{
_putchar('0' + prod);
}
else
{
_putchar('0' + prod / 10);
_putchar('0' + prod % 10);
}
_putchar(',');
}
_putchar(i * 9 + '0');
_putchar('\n');
}
}

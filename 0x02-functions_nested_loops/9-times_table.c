#include "main.h"
/**
* print_9_times_table - a function which print the 9x table
* Return: 0
*/
void print_9_times_table(void)
{
_putchar("0,..");
for (int i = 0; i < 10; i++)
{
_putchar("%d,..", i);
}
_putchar("0$\n");
for (int i = 0; i < 10; i++)
{
_putchar("%d,..", i);
for (int j = 0; j < 10; j++)
{
_putchar("%d,..", i * j);
}
_putchar("%d$\n", i * 9);
}
}

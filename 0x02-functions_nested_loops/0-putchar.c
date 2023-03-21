#include "main.h"
#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
**/
int main(void)
{
char out[8] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};
unsigned int i;
for (i = 0; i < sizeof(out); i++)
{
putchar(out[i]);
}
putchar('\n');
return (0);
}

#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int num = 48;
    while (num <= 102)
    {
        if (num <= 57 || num >= 97)
        {
            putchar(num);
        }
        num++;
    }
    putchar('\n');
    return (0);
}

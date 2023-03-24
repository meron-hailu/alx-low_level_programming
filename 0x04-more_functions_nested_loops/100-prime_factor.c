#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/**
 * main - prints prime factors of 612852475143
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
long n = 612852475143L;
long i;
long largest_factor = 0;
while (n % 2 == 0)
{
largest_factor = 2;
n /= 2;
}
for (i = 3; i <= sqrt(n); i += 2)
{
while (n % i == 0)
{
largest_factor = i;
n /= i;
}
}
if (n > 2)
{
largest_factor = n;
}
printf("%ld\n", largest_factor);
return (0);
}

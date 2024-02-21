#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: starting number
 *
 * Return: void
 */
void print_to_98(int n)
{
if (n < 98)
{
for (n = n; n < 98; n++)
{
_putchar(n / 10 + '0');
_putchar(n % 10 + '0');
_putchar(',');
_putchar(' ');
}
}
else
{
for (n = n; n > 98; n--)
{
_putchar(n / 10 + '0');
_putchar(n % 10 + '0');
_putchar(',');
_putchar(' ');
}
}
_putchar('9');
_putchar('8');
_putchar('\n');
}
     
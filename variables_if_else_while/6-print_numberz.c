#include <stdio.h>
/**
 * main - print numbers from 0 to 10
 * Description: print numbers from 0 to 10
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;

for (n = 0; n <= 9; n++)
putchar(n + '0');
putchar('\n');
return (0);
}

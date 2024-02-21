#include "main.h"
/**
 * main -  prints the alphabet in lowercase, followed by a new line
 * Return: Always 0 (Success)
 */
void print_alhabet(void)
{
char c;

for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
}
int main(void)
{
print_alhabet();
return (0);
}

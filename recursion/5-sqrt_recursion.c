#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to find the square root of
 *
 * Return: the natural square root of n
 */
int _sqrt_recursion(int n)
{
if (n == 0)
{
return (0);
}
else if (n == 1)
{
return (1);
}
else
{
return (_sqrt_recursion(n - 1) + 1);
}
}

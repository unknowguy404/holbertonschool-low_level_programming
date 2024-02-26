#include "main.h"

/**
 * _puts - prints a string followed by a new line to stdout
 * follow by new line, to stdout
 * @str: input string
 * Return: no return
 */
void _puts(char *str)
{
    while(*str)

        _putchar(*str++);
    _putchar('\n');
    return;
}

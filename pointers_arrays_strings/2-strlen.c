#include "main.h"
/**
 *_strlen - print a string
 *@s:is the string to print
 *Return: lenght of string
*/
int _strlen(char *s)
{
int i = 0;

while (s[i] != '\0')
i++;
return (i);
}


#include <stdlib.h>
#include "main.h"

/**
 * create_array - create an array from a list of integers
 * @size: size of the array
 * @c: the array to be created
 *
 * Return: the new array
*/
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *s;
if (size == 0)
return (NULL);
s = malloc(sizeof(char) * size);
if (s == NULL)
return (NULL);
for (i = 0; i < size; i++)
{
s[i] = c;
}
return (s);
}

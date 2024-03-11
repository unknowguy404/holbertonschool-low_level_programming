#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"
char *_strdup(char *str);
/**
 * new_dog - function with 3 arguments
 * @name: char type pointer
 * @age: float type
 * @owner: char type pointer
 * Description: creates a new dog
 * Return: NULL if fail or pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_d;
new_d = malloc(sizeof(dog_t));
if (new_d == NULL)
return (NULL);

new_d->name = strdup(name);
if (new_d->name == NULL)
{
free(new_d);
return (NULL);
}
new_d->age = age;
new_d->owner = strdup(owner);
if (new_d->owner == NULL)
{
free(new_d->name);
free(new_d);
return (NULL);
}

return (new_d);
}

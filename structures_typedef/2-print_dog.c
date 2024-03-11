#include <stdio.h>
#include "dog.h"
/**
 *
*/
void print_dog(struct dog *d)
{
if (d == NULL)
{
printf("Name:(nil)\n");
printf("Owner:(nil)\n");
printf("Age:(nil)\n");
}
else
{
printf("Name:%s\nAge:%f\nOwner:%s\n", d->name, d->age, d->owner);
}
}

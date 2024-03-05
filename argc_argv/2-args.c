#include <stdio.h>
#include "main.h"
/**
 * main - main function
 * @argc: number of arguments
 * @argv: number of arguments
 * Return: number of arguments* main - main function
 */
int main(int argc, char *argv[])
{
printf("%s\n", argv[0]);

for(int i = 1; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}

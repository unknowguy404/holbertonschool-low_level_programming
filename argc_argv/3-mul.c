#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function
 * @argc: number of arguments
 * @argv: number of arguments
 * Return: number of arguments
 */
int main(int argc, char *argv[])
{
int total;

if (argc != 3)
{
printf("Error\n");
return (1);
}
total = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", total);
return (0);
}

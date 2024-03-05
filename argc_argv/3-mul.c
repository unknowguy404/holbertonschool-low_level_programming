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
(void) argc;
int value = atoi(argv[1]);
int value2 = atoi(argv[2]);
int total = value * value2;
printf("%d\n", total);
return (0);
}

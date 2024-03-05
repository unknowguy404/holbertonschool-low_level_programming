#include <stdio.h>
#include "main.h"
/**
 * main - main function
 * @argc: number of arguments
 * @argcv: number of arguments
 * Return: number of arguments
*/
int main(int argc, char *argv[])
{
argc++;
argc--;
printf("%s\n", argv[0]);
return (0);
}

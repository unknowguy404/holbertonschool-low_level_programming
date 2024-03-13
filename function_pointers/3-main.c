#include "3-calc.h"

/**
 * main - receives basic calculations arguments
 * @argc: argument count
 * @argv: argument value
 * Return: Always 0 on success.
 */
int main(int argc, char *argv[])
{
	int (*f)(int, int);
	int num1, num2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if ((argv[2][0] == '/' || argv[2][0] == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	f = get_op_func(argv[2]);

	if (!f)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", f(num1, num2));
	return (0);
}

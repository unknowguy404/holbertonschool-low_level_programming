#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

/**
 * struct print - struct for printing data
 * @type: The data type to be printed
 * @f: The function pointer to the corresponding function
 */
typedef struct print
{
	char *type;
	void (*f)(va_list);
} print_t;

int sum_them_all(const unsigned int n, ...);

#endif /* VARIADIC_FUNCTIONS_H */

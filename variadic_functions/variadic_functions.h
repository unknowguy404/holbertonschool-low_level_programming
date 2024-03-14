#ifndef _VARIADIC_FUNCTIONS_H_
#define _VARIADIC_FUNCTIONS_H_
#include <stdarg.h>
/**
 * struct type - struct for printing data
 * @type: The data type to be printed
 * @f: The function pointer to the corresponding function
 */
typedef struct types
{
	char z;
	void (*f)(va_list);
} types_t;
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char *const format, ...);
int _putchar(char c);

#endif

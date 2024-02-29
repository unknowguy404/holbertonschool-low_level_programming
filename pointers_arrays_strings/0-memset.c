#include "main.h"
/**
 **_memset - fill a byte string with a byte value
 *@s:pointer to the memory area
 *@b:the constant byte
 *@n:bytes of the memory area
 *Return:Returns a pointer to the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for(i = 0; i < n; i++)
{
s[i]=b;
}
return (s);
}

#include "main.h"

/**
* _puts – program prints a string followed by a new line to stdout
* @str: The string to print.
* _putchar prints a new line
*/
void _puts(char *str)
{
while (*str)
_putchar(*str++);

_putchar('\n');
}

#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
printf("size of a char: %d bytes(s)\n", (unsigned long)sizeof(char));
printf("size of int: %d byte(s)\n", (unsigned long)sizeof(int));
printf("size of long int: %d byte(s)\n", (unsigned long)sizeof(long int));
printf("size of a long long int: %d byte(s)\n", (unsigned long)sizeof(long long int));
printf("size of a float:%d byte(s)\n", (unsigned long)sizeof(float));
return (0);
}

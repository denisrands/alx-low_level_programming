#include "main.h"

/**
* swap_int - takes two integers int *a and int *b and swaps them
* @a: swaps and stores the address of b
* @b: swaps and stores the address of a
* Return: 0
*/
void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}

#include "main.h"
/**
* swap_int – take in two variables interpret and swap them
* @author Anisah
* @a: swaps and store address of b
* @b: swaps and stores address of a
* Return:  0
*/
void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}

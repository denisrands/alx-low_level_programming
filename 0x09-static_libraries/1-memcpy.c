#include "main.h"

/**
*_memcpy - a function that copy memory area
*@dest: memory where is stored
*@src: memory where is copied
*@n: number of bytes
*Return: copied memory with n byte changed
*/

char *_memcpy(char *dest, char *src, unsigned int n)

{

int i = 0;

int r = n;


for (; i < r; i++)

{

dest[i] = src[i];

n--;

}

return (dest);

}

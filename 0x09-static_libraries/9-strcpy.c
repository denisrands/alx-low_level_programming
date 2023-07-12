#include "main.h"


/**
* char *_strcpy - a function that copy the string pointed to by src
* @dest: copy to
* @src: copy from
* Return: value of a string
*/

char *_strcpy(char *dest, char *src)

{

int e = 0;

int f = 0;


while (*(src + e) != '\0')

{

e++;

}

for ( ; f < e ; f++)

{

dest[f] = src[f];

}

dest[e] = '\0';

return (dest);

}

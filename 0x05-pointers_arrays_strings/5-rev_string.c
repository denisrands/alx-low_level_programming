#include "main.h"

/**
* rev_string - prints a string in reverse
* @s: pointer pointing to the string
* Return: void
*/
void rev_string(char *s)
{
int length = 0;
int z, half;
char temp;

while (s[length] != '\0')
length++;

z = 0;
half = length / 2;

while (half--)
{
temp = s[length - z - 1];
s[length - z - 1] = s[z];
s[z] = temp;
z++;
}
}

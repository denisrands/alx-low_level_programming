#include "main.h"
/**
* _strncpy - copy a string
* @dest: input value
* @src: input value
* @n: input value
*
* Return: dest
*/
char *_strncpy(char *dest, char *src, int n)
{
int j;
j = 0;
while (j < n && src[j] != '\0')
{
dest[j] = src[j];
j++;
}
while (j < n)
{
dest[j] = '\0';
j++;
}
return (dest);
}
====================================
3-strcmp.c
#include "main.h"
/**
* _strcmp - compare string values
* @s1: input value
* @s2: input value
*
* Return: s1[i] - s2[i]
*/
int _strcmp(char *s1, char *s2)
{
int i;
i = 0;
while (s1[i] != '\0' && s2[i] != '\0')
{
if (s1[i] != s2[i])
{
return (s1[i] - s2[i]);
}
i++;
}
return (0);
}

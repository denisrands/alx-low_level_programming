#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - Entry point
*
* Return: Always 0
*/
int main(void)
{
int i;
int passwordLength = 10;
char password[11];
srand(time(0));

for (i = 0; i < passwordLength; i++)
{
password[i] = 'a' + (rand() % 26);
}

password[i] = '\0';

printf("%s\n", password);

return 0;
}

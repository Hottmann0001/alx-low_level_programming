#include <stdio.h>
/**
 *main -Entry point
 *Return: 0 (Success)
 *Description: print alphabetic in lowercase then in uppercase
 */
int main(void)
{
char lowercase = 'a';
char uppercase = 'A';

while (lowercase <= 'z')
{
putchar(lowercase);
lowercase++;
}

while (uppercase <= 'Z')
{
putchar(uppercase);
uppercase++;
}

putchar('\n');
return (0);
}


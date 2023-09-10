#include <stdio.h>
/**
 *main -Entry point
 *Return: 0 (Success)
 *Description: prints the lowercase alphabet in reverse
 */
int main(void)
{
char letter = 'z';

while (letter >= 'a')
{
putchar(letter);
letter--;
}


putchar('\n');

return (0);
}

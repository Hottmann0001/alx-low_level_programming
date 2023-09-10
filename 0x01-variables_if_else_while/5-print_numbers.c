#include <stdio.h>
/**
 *main -Entry point
 *Return: 0 (Success)
 *Description: prints all single digit numbers of base 10 starting from 0
 */
int main(void)
{
int digit;

for (digit = 0; digit <= 9; digit++)
{
putchar('0' + digit);
}


putchar('\n');

return (0);
}

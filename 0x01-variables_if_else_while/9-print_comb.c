#include <stdio.h>
/**
 *main -Entry point
 *Return: 0 (Success)
 *Description: prints all possible combinations of single-digit numbers
 */
int main(void)
{
for (int i = 0; i < 10; i++) {
putchar(i + '0');
if (i != 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');

    return (0);
}

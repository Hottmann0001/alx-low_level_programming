#include <stdio.h>
/**
 *main -Entry point
 *Return: 0 (Success)
 *Description: prints all possible combinations of single-digit numbers
 */
int main(void)
{
int i, j;
for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
putchar(i + '0');
putchar(',');
putchar(' ');
putchar(j + '0'+"\t");
}
}

putchar('\n');

return (0);
}

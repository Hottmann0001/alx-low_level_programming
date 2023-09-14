#include "main.h"
/**
 *main -Entry point
 *Return: 0 (Success)
 *Description: prints _putchar, followed by a new line.
 */
int main(void)
{
int ch;
char str[] = "_putchar";
for (ch = 0; ch < 8; ch++)
{
_putchar(str[ch]);
}
_putchar('\n');
return (0);
}

#include"main.h"
/**
 *print_alphabet- function that prints the alphabet, in lowercase,new line
 */
void print_alphabet(void)
{
char letter = 'a';

while (letter <= 'z')
{
putchar(letter);
letter++;
}
_putchar('\n');
}

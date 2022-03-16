#include "main.h"

/**
* print alphabet

*
* return :void
*/

void print_alphabet(void)
{
char letter = 'a';

while (letter <= 'z')
{
_putchar(letter);
letter++;
}
_putchar('\n');
}

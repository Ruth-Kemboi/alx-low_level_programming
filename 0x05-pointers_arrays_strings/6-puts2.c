#include "main.h"
/**
 * puts2 - function should print only one character out of two
 * starting with the first one
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
int leng = 0;
int x = 0;
char *y = str;
int i;

while (*y != '\0')
{
y++;
leng++;
}
x = leng - 1;
for (i = 0; 0<= x; i++)
{
if (i % 2 == 0)
{
_putchar(str[0]);
}
}
_putchar('\n');
}

#include <stdlib.h>
#include <stdio.h>

/* more headers goes there */

/* betty style doc for function main goes there */

/**
 * main -Entry point
 * prints the alphabets in lowercase then uppercase
 * return :0
 */

int main(void)
{
	int i;
	int j;

	for (i = 'a' ; i <= 'z' ; i++)
	{
		putchar (i);
	}
	for (j = 'A' ; j <= 'Z' ; j++)
	{
		putchar (j);
	}
	putchar ('\n');

	return (0);
}



#include <stdio.h>
/**
 * main -  program that prints all the numbers of base 16 in lowercase
 * followed by a new line
 * Return: 0 (success)
 */
int main(void)
{
	int i;
	char ch;

	for (i = 0; i < 10; i++)
	{
		putchar(i);
	}

	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}

	putchar('\n');

	return (0);
}

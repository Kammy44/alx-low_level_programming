#include <stdio.h>
/**
 * main - prints the alphabet in lowercase
 * followed by a new line
 * Return: Always 0 (success)
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')

	{

	putchar(letter);
	letter++;

	}

	putchar('\n');
	return (0);
}

#include <stdio.h>
/**
 * main - prints letters in lowercase and upper case,
 * followed by a new line
 * Return: 0 (success);
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
{

	putchar(letter);
}


	for (letter = 'A'; letter <= 'Z'; letter++)
{

	putchar(letter);
}

	putchar('\n');

	return (0);

}


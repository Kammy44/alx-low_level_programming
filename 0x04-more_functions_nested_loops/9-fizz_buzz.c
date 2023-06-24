#include "main.h"
#include <stdio.h>
/**
 * main - entry point
 *
 * Description: prints the numbers 1-100 w/
 * fizz for multiple of 3, Buzz for multiple of 5
 * and fizzBuzz for multiple of both
 *
 * Return: always 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
	if (i % 15 == 0)
		printf("fizzBuzz");
	else if (i % 3 == 0)
		printf("fizz");
	else if (i % 5 == 0)
		printf("Buzz");
	else
		printf("%i", i);
	if (i < 100)
		print(" ");

	}
	printf('\n');
	return (0);
}

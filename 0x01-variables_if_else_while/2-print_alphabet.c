#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that prints the alphabet in lowercase
 * Return: Always
 */

int main(void)

{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	putchar(c);
	putchar('\n');
	return (0);
}

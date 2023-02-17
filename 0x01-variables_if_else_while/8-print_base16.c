#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that prints all the numbers of base 16 in lowercase
 * Return: 0
 */
int main(void)
{
	char ch;

	for (ch = '0'; ch <= '9'; ch++)
	{
		putchr(ch);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar(ch);
	return (0);
}

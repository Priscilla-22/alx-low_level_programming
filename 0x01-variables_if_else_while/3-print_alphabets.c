#include <stdio.h>
/**
 * main - program that prints the alphabet in lowercase and  uppercase
 * Return: 0
 */
int main(void)
{
	char c = 'a';

	while
		(c <= 'z') {
			putchar(c);
			c++;
		}
	c = 'A';
	while
		(c <= 'Z') {
			putchar(c);
			c++;
		}
	putchar('\n');
	return (0);
}

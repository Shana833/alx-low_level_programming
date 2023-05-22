#include <stdio.h>
/*
 * main - print lower case and upper
 * Return: Always 0 (success)
 */
int main(void)

{
	char c;
	char d;

	c = 'a';
	d = 'A';
	while
		(c <= 'z')
		{
			putchar(c);
			c++;
		}
	while
		(d <= 'Z')
		{
			putchar(d);
			d++;
		}
	putchar('\n');
	return (0);
}

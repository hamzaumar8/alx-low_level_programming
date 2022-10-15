#include <stdio.h>

/**
 * main - prints all the numbers os base 16 in lowercase,
 * followed bu a new line
 * Return: 0
 */
int main(void)
{int n;
	char wds;

	for (n = 48, n < 58; n++)
	{
		putchar(n);
	}
	for (wds = 'a'; wds <= 'f'; wds++)
	{
		putchar(wds);
	}
	putchar('\n');
	return (0);
}

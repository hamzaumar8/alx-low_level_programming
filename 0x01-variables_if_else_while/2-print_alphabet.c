#include <stdio.h>

/**
 *main - prints the alphabet in lowercase,
 *followed by a new line
 *Return: Alway 0 (Success)
 */

int main(void)
{
	char wds;

	for (wds = 'a'; wds <= 'z'; wds++)
	{
		putchar(wds);
	}
	putchar('\n');
	return (0);
}

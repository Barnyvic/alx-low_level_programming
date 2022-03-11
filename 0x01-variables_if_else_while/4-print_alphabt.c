#include <stdio.h>
/**
 * main - represent Entry Point to the program
 * Return: 0 to stop the program
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		ch++
	}
	putchar('\n')
	return (0);
}



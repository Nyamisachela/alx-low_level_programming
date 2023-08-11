#include <stdio.h>

/**
 * main - program that prints the alphabet in lowercase, except for q and e
 * Return: always 0 (success)
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'q' && letter != 'e')
		{
			putchar(letter);
		}
	}
			putchar ('\n');
			return (0);
}


#include <unistd.h>
/**
 *main - A program that prints message, new line and standard error
 *Return: 1 (success)
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (0);
}

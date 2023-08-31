#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes chara c to stdout
 * @c: character to be printed
 *
 * Return:1 success
 * Retuirn:  -1 error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

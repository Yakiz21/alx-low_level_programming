#include "main.h"
/**
 * _memset - Progrm fills a block of memory with a specific value
 * @s: starting address of a memory to be filled
 * @b: the desired value
 * @n: number of the bytes to be changed
 *
 * Return: change array with a new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}

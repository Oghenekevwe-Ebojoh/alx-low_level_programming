#include "main.h"
/**
 * main - this is the entry point
 *
 * _islower -  function that checks for lowercase character
 * @c: the value to check
 * Return: returns 1 if c is lowercase, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}

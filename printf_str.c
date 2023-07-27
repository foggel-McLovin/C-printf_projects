#include "main.h"
/**
 * _strlen - Returns the lenght of a string ( modifiable ).
 * @s: Type char pointer
 * Return: c.
 */
int _strlen(char *s)
{
	int c;

	for (c = 0; s[c] != 0; c++)
		;
	return (c);

}
/**
 * _strlenc - Strlen function applied for constant char ( not modifiable ).
 * @s: Type char pointer
 * Return: c
 */
int _strlenc(const char *s)
{
	int c;

	for (c = 0; s[c] != 0; c++)
		;
	return (c);
}

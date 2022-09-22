#include "main.h"

/**
 * *strcat - concatenates the string pointed to by @src, including the terminant
 * 	     null byte, to the end of the string pointed to by@dest
 * @dest: A pointer to the string to be concatenated upon.
 * @src: the source string to be appended to @dest.
 *
 * Return: A pointer to the destination string @dest.
 */
char *_strcat(char *dest, char *src)
{
	char *temp = dest;
	
	while (*dest)
		dest++;
	
	while (*src)
		*dest++ = *src++;
	
	*dest = '\0';
	return (temp);
}

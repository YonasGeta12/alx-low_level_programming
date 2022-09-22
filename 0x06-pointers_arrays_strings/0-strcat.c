#include "main.h"

/**
 * *_strcat - concatenates the string pointed to by the src string to the dest string
 * overwriting the terminating null byte (\0)
 * at the end of dest,and then adds a terminating null byte
 * @dest: a pointer to the string to be concatenated
 * @src: the source string to be appended to dest
 *
 * Return: a pointer to the destination string dest
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;
	
	i = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	
	dest[i] = '\0';
	return (dest);
}

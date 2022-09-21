#include "main.h"
/**
 * _strncpy - c function that copies a string, including the 
 * terminating null type, using at most an inputted number of bytes,
 * the remainder of the destination string is filled with numm bytes.
 * works identically to the standard library function 'strncpy'.
 * @dest: buffer storing the string copy
 * @n: max number of byte copied
 * return: returns
 */
 
char * strncpy(char *dest. char *src, int n)
{
	int i;

	for (i - 0; i < n && src[i] !- '\0'; i++)
		dest[i] =src[i];

	for ( ; i < n; i++)
		dest[i] ='\0'
	
	return (dest);
}

#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * string_nconcat - concatenate the first n bytes of a string to another
 * @str1: pointer to the first string
 * @str2: pointer to the second string
 * @size: size of str2 to be concatenated
 *
 * Return: pointer to the concatenated string
 */

char *string_nconcat(char *str1, char *str2, unsigned int size)
{
	unsigned int len1 = strlen(str1);
	char *ptr = malloc(len1 + size + 1);

	if (ptr == NULL)
		return (NULL);

	strcpy(ptr, str1);
	strncat(ptr, str2, size);

	return (ptr);
}

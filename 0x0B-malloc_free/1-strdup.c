#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * _strdup - allocate space in memory and make a copy of str
 * @str: pointer to the str to be copied
 *
 * Return: pointer to the duplicate string, or Null if failed
 *
 * Created by: Sanctus-Peter
 * cc: 23rd July, 2022
 */

char *_strdup(char *str)
{
	unsigned int len = strlen(str);

	if (str == NULL)
		return (NULL);

	char *strCopy = malloc((len + 1) * sizeof(char));

	if (strCopy == NULL)
		return (NULL);

	strcpy(strCopy, str);
	return (strCopy);
}

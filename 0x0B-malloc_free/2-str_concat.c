#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenate two string
 * @s1: pointer to first string
 * @s2: pointer to second string
 *
 * Return: pointer to the concatenated string
 *
 * Created by: Sanctus-Peter
 * cc: 23rd July, 2022
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0;
	char *output;

	if (s1 == NULL || s2 == NULL)
		return (NULL);

	for (; s1[i] != '\0'; i++)
		;
	for (; s2[j] != '\0'; j++)
		;

	output = malloc((i + j) * sizeof(*s1) + 2);

	if (output == 0)
		return (NULL);
	strcat(output, s1);
	strcat(output, s2);

	return (output);
}

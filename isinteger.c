#include "monty.h"

/**
 * isinteger - checks if a token is an integer
 * @token: token to check
 *
 * Return: 1 if integer, 0 if not
 */

int isinteger(char *token)
{
	int i = 0, status = 0;
	char *intchecker = "1234567890", *c;

	if (token[i] == '-')
	{
		status = 1;
		i = 1;
	}
	for (i = i; token[i] != '\0'; i++)
	{
		c = strchr(intchecker, token[i]);
		if (c == NULL)
		{
			status = 0;
			return (status);
		}
		status = 1;
	}
	return (status);
}

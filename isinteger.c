#include "monty.h"

/**
 * isinteger - checks if a token is an integer
 * @token: token to check
 *
 * Return: 1 if integer, 0 if not 
 */

int isinteger(char *token)
{
	int i = 1, i_a, status = 0;
	char intchecker[] = ['-', '1', '2', '3', '4', '5', '6', '7', '8', '9', '0'];

	for (i_a = 0; i_a; i_a++)
	{
		if (token[0] == intchecker[i_a])
			status = 1;
	}
	if (status == 0)
		return (status);
	while (token[i])
	{
		status = 0;
		for (i_a = 1; i_a; i_a++)
		{
			if (token[i] == intchecker[i_a])
				status = 1;
		}
		if (status == 0)
			return (status);
		i++;
	}
	return (status);
}

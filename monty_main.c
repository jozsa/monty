#include "monty.h"

int main(int argc, char **argv)
{
	FILE *fd;
	char *line;
	char *tokens[2];
	size_t len;
	int char_count;
/*	stack_t *head = NULL; */

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		return (EXIT_FAILURE);
	}
	fd = fopen(argv[1], "r");
	if (!fd)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		return (EXIT_FAILURE);
	}
	while ((char_count = getline(&line, &len, fd)) != -1)
	{
		line[char_count - 1] = '\0';
		tokens[0] = strtok(line, " ");
		printf("%s\n", tokens[0]);
		if (tokens[1])
		{
			tokens[1] = strtok(NULL, " ");
			printf("%s\n", tokens[1]);
		}
/*		fn_finder(*head, tokens[0]); */
	/*	if (!head->n)
			head->n = atoi(tokens[1]);
		line_number++; */
	}
	return (EXIT_SUCCESS);
}

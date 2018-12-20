#include "monty.h"

/**
 * main - Reads opcodes in monty files and executes the corresponding functions
 * @argc: The number of arguments passed to the program (must be 2)
 * @argv: The array of pointers to the arguments passed to the program
 *
 * Return: EXIT_SUCCESS upon completion of the program
 */

int main(int argc, char **argv)
{
	FILE *fd;
	char *line = NULL, *push = "push";
	char *tokens[2];
	size_t len;
	int char_count;
	unsigned int line_number = 1;
	stack_t *stack = NULL;

	if (argc != 2)
		arg_error();
	fd = fopen(argv[1], "r");
	if (!fd)
		fileopen_error(argv[1]);
	while ((char_count = getline(&line, &len, fd)) != EOF)
	{
		line[char_count - 1] = '\0';
		tokens[0] = strtok(line, " ");
		tokens[1] = strtok(NULL, " ");
		if (tokens[0] && tokens[0][0] != '#')
		{
			fn_finder(tokens[0], line_number, &stack);
			if (strcmp(tokens[0], push) == 0)
				stack->n = atoi(tokens[1]);
		}
		line_number++;
	}
	fclose(fd);
	m_free_stack(stack);
	free(line);
	return (EXIT_SUCCESS);

}

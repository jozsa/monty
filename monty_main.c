#include "monty.h"

int main(int argc, char **argv)
{
	FILE *fd;
	char *line;
	char *tokens[2];
	size_t len;
	int char_count;
	stack_t *head = NULL;
	instruction_t opcodes[] = {
		{"push", push}, {NULL, NULL}
	};

	if (argc != 2)
		arg_error();
	fd = fopen(argv[1], "r");
	if (!fd)
		fileopen_error(argv[1]);
	while ((char_count = getline(&line, &len, fd)) != EOF)
	{
		line[char_count - 1] = '\0';
		tokens[0] = strtok(line, " ");
		printf("%s\n", tokens[0]); /* to remove, just a test printer */
		tokens[1] = strtok(NULL, " ");
		if (tokens[1])
			printf("%s\n", tokens[1]); /* to remove, just a test printer */
		if (strcmp(tokens[0], opcodes[0].opcode) == 0) /* jack - remove this when you create fn_finder */
		{
			opcodes[0].f(&head, 50); /* 50 is arbitrary number, &head not sure if this is correct */
		}
		/*		fn_finder(*head, tokens[0]); */
	}
	return (EXIT_SUCCESS);
}

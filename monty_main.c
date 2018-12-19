#include "monty.h"

stack_t *stack = NULL;

int main(int argc, char **argv)
{
	FILE *fd;
	char *line = NULL;
	char *tokens[2];
	size_t len;
	int char_count;
	unsigned int line_number = 0;
	instruction_t opcodes[] = {
		{"push", push}, {"nop", NULL}
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
		tokens[1] = strtok(NULL, " ");
		if (tokens[0])
		{
			printf("%s\n", tokens[0]);
			if (strcmp(tokens[0], opcodes[0].opcode) == 0) /* jack - remove this when you create fn_finder */
			{
				opcodes[0].f(&stack, line_number); /* 50 is arbitrary number, &head not sure if this is correct */
				(stack->n = atoi(tokens[1]));
				printf("%d\n", stack->n);
			}
		/*		fn_finder(*head, tokens[0]); */
		}
		line_number++;
	}
	return (EXIT_SUCCESS);
}

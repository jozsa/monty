#include "monty.h"

void arg_error(void)
{
	fprintf(stderr, "USAGE: monty file\n");
	exit(EXIT_FAILURE);
}

void fileopen_error(char *filename)
{
	fprintf(stderr, "Error: Can't open file %s\n", filename);
	exit(EXIT_FAILURE);
}

void instruction_error(char *opcode, unsigned int line_number)
{
	fprintf(stderr, "L%d: unknown instruction %s", line_number, opcode);
	exit(EXIT_FAILURE);
}

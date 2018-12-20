#include "monty.h"
/**
 * arg_error - exits if usage is incorrect
 */
void arg_error(void)
{
	fprintf(stderr, "USAGE: monty file\n");
	exit(EXIT_FAILURE);
}

/**
 * fileopen_error - exits if file cannot be opened
 */

void fileopen_error(char *filename)
{
	fprintf(stderr, "Error: Can't open file %s\n", filename);
	exit(EXIT_FAILURE);
}

/**
 * instruction_error - exits if opcode is disallowed
 * @opcode: bad opcode
 * @line_number: line number to print in error
 */

void instruction_error(char *opcode, unsigned int line_number)
{
	fprintf(stderr, "L%d: unknown instruction %s", line_number, opcode);
	exit(EXIT_FAILURE);
}

/**
 * sts_error - exits if stack is too short for math operation
 * @line_number: line number to print in error
 * @opcode: operation to print in error
 */

void sts_error(unsigned int line_number, char *opcode)
{
	fprintf(stderr, "L%d: can't %s, stack too short\n", line_number, opcode);
	exit(EXIT_FAILURE);
}

/**
 * div_error - exits if division by zero is attempted
 * @line_number: line number to print
 */

void div_error(unsigned int line_number)
{
	fprintf(stderr, "L%d: division by zero\n", line_number);
	exit(EXIT_FAILURE);
}

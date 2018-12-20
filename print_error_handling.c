#include "monty.h"

/**
 * pchar_range_error - Error for when value is out of ascii table
 * @line_number: Line number where the error happened
 */

void pchar_range_error(unsigned int line_number)
{
	fprintf(stderr, "L%d: can't pchar, value out of range\n", line_number);
	exit(EXIT_FAILURE);
}

/**
 * pchar_stack_error - Error for when stack is empty
 * @line_number: Line where the error occured
 */

void pchar_stack_error(unsigned int line_number)
{
	fprintf(stderr, "L%d: can't pchar, stack empty\n", line_number);
	exit(EXIT_FAILURE);
}

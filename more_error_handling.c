#include "monty.h"

/**
 * alloc_error - exits if memory is unable to allocate
 */

void alloc_error(void)
{
	fprintf(stderr, "Error: malloc failed");
	exit(EXIT_FAILURE);
}

/**
 * pop_error - exits if pop is attempted on an empty stack
 * @line_number: line number to print
 */

void pop_error(unsigned int line_number)
{
	fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
	exit(EXIT_FAILURE);
}

/**
 * push_error - exits if usage of push is incorrect
 * @line_number: line number to print
 */

void push_error(unsigned int line_number)
{
	fprintf(stderr, "L%d: usage: push integer\n", line_number);
	exit(EXIT_FAILURE);
}

/**
 * pint_error - exits if pint is called on empty stack
 * @line_number: line number to print
 */

void pint_error(unsigned int line_number)
{
	fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
	exit(EXIT_FAILURE);
}

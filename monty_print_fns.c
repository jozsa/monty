#include "monty.h"

/**
 * m_pall - prints all n values in the stack
 * @stack: pointer to stack
 * @line_number: line number
 */

void m_pall(stack_t **stack, unsigned int line_number)
{
	stack_t *runner = *stack;

	line_number = line_number;
	if (*stack == NULL)
		return;
	while (runner != NULL)
	{
		printf("%d\n", runner->n);
		runner = runner->next;
	}
}

/**
 * m_pint - prints the top integer of the stack
 * @stack: pointer to the stack
 * @line_number: line number
 */

void m_pint(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)
		pint_error(line_number);
	printf("%d\n", (*stack)->n);
}

/**
 * m_pchar - Prints ascii representation of integer at top of stack
 * @stack: Pointer to the stack
 * @line_number: line number
 */

void m_pchar(stack_t **stack, unsigned int line_number)
{
	line_number = line_number;
	if (*stack == NULL)
		pchar_stack_error(line_number);
	if ((*stack)->n >= 0 && (*stack)->n <= 122)
		printf("%c\n", (char)(*stack)->n);
	else
		pchar_range_error(line_number);
}

/**
 * m_pstr - Prints a string starting at the top of the stack
 * @stack: Pointer to the stack
 * @line_number: Line number of the monty file
 */

void m_pstr(stack_t **stack, unsigned int line_number)
{
	stack_t *runner = *stack;

	line_number = line_number;
	if (*stack == NULL)
	{
		putchar('\n');
		return;
	}
	while (runner != NULL && runner->n > 0 && runner->n < 123)
	{
		printf("%c", (char)runner->n);
		runner = runner->next;
	}
	putchar('\n');
}

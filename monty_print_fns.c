#include "monty.h"

/**
 * m_pall - prints all n values in the stack
 * @stack: pointer to stack
 * @line_number: line number
 */

void m_pall(stack_t **stack, unsigned int line_number)
{
	stack_t *runner = *stack;
	if (!stack)
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
	if (!stack)
		pint_error(line_number);
	printf("%d\n", (*stack)->n);
}

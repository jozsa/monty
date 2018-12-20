#include "monty.h"

/**
 * m_push - pushes a blank node to be filled to top of stack
 * @stack: pointer to stack
 * @line_number: line number for error handling
 */

void m_push(stack_t **stack, unsigned int line_number)
{
	stack_t *new;

	(void)line_number;
	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	new->n = 0;
	new->next = *stack;
	new->prev = NULL;
	if ((*stack) != NULL)
		(*stack)->prev = new;
	*stack = new;
	printf("%d\n", new->n);
}

/**
 * m_pop - pops the top element off the stack
 * @stack: pointer to stack
 * @line_number: line number
 */

void m_pop(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;
	if (stack == NULL)
		printf("lol");
	/*	pop_error(line_number); */
	*stack = (*stack)->next;
	free(temp);
	(*stack)->prev = NULL;
}

/**
 * m_swap - swaps the top two elements of the stack
 * @stack: pointer to stack
 * @line_number: line number
 */

void m_swap(stack_t **stack, unsigned int line_number)
{
	if (!(*stack)->next)
		sts_error(line_number, "swap");
	int swapper = (*stack)->n;
	(*stack)->n = (*stack)->next->n;
	(*stack)->next->n = swapper;
}

/**
 * m_nop - does nothing but does not exit the program
 * @stack: pointer to stack
 * @line_number: line number
 */

void m_nop(stack_t **stack, unsigned int line_number)
{
	return;
}

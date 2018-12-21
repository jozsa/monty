#include "monty.h"

/**
 * m_push - pushes a blank node to be filled to top of stack
 * @stack: pointer to stack
 * @line_number: line number for error handling
 */

void m_push(stack_t **stack, unsigned int line_number)
{
	stack_t *new;

	line_number = line_number;
	new = malloc(sizeof(stack_t));
	if (new == NULL)
		alloc_error();
	new->n = 0;
	new->next = *stack;
	new->prev = NULL;
	if ((*stack) != NULL)
		(*stack)->prev = new;
	*stack = new;
}

/**
 * m_pop - pops the top element off the stack
 * @stack: pointer to stack
 * @line_number: line number
 */

void m_pop(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;

	if (*stack == NULL)
		pop_error(line_number);
	if ((*stack)->next == NULL)
	{
		free(*stack);
		*stack = NULL;
		return;
	}
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
	int swapper;

	if (*stack == NULL || !(*stack)->next)
		sts_error(line_number, "swap");
	swapper = (*stack)->n;
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
	stack = stack;
	line_number = line_number;
}

/**
 * m_free_stack - Frees the stack at the end of the program
 * @stack: Stack to be freed
 */

void m_free_stack(stack_t *stack)
{
	stack_t *temp = stack;

	while (stack != NULL)
	{
		stack = stack->next;
		free(stack);
	}
	free(temp);
}

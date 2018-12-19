#include "monty.h"

/**
 */
stack_t *stack;

void push(stack_t **stack, unsigned int line_number)
{
	stack_t *new = *stack;
	
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

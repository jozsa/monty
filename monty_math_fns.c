#include "monty.h"

/**
 * m_add - adds the top two elements of the stack together
 * @stack: pointer to stack
 * @line_number: line number
 */

void m_add(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;
	if (!(*stack)->next)
		sts_error(line_number, "add");
	(*stack)->next->n = (*stack)->n + (*stack)->next->n;
	*stack = (*stack)->next;
	free(temp);
}

/**
 * m_sub - subtracts the top from the bottom of the stack
 * @stack: pointer to stack
 * @line_number: line number
 */

void m_sub(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;
	if (!(*stack)->next)
		sts_error(line_number, "sub");
	(*stack)->next->n = (*stack)->next->n - (*stack)->n;
	*stack = (*stack)->next;
	free(temp);

}

/**
 * m_mul - multiplies the top two elements of the stack together
 * @stack: pointer to stack
 * @line_number: line number
 */

void m_mul(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;
	if (!(*stack)->next)
		sts_error(line_number, "sub");
	(*stack)->next->n = (*stack)->next->n * (*stack)->n;
	*stack = (*stack)->next;
	free(temp);
}

/**
 * m_div - divides the second stack element by the first
 * @stack: pointer to stack
 * @line_number: line number
 */

void m_div(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;
	if (!(*stack)->next)
		sts_error(line_number, "sub");
	if ((*stack)->n != 0)
	{
		(*stack)->next->n = (*stack)->next->n / (*stack)->n;
		*stack = (*stack)->next;
	}
	else
		div_error(line_number);
	free(temp);
}

/**
 * m_mod - remainder of div operation
 * @stack: pointer to stack
 * @line_number: line number
 */

void m_mod(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;
	if (!(*stack)->next)
		sts_error(line_number, "sub");
	if ((*stack)->n != 0)
	{
		(*stack)->next->n = (*stack)->next->n % (*stack)->n;
		*stack = (*stack)->next;
	}
	else
		div_error(line_number);
	free(temp);
}

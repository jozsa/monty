void m_add(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;
	if (!stack->next)
		sts_error(line_number, "add");
	(*stack)->next->n = stack->n + stack->next->n;
	stack = *((*stack)->next);
}
void m_sub(stack_t **stack, unsigned int line_number);
void m_mul(stack_t **stack, unsigned int line_number);
void m_div(stack_t **stack, unsigned int line_number);
void m_mod(stack_t **stack, unsigned int line_number);

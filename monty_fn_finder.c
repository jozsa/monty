#include "monty.h"

/**
 * fn_finder - compares token to fn list, performs operation
 * @opcode: token to be read as opcode
 * @line_number: line number
 * @stack: The stack to execute the functions on
 */

void fn_finder(char *opcode, unsigned int line_number, stack_t **stack)
{
	unsigned int i;
	instruction_t ops[] = {
		{"push", m_push}, {"pall", m_pall}, {"pint", m_pint},
		{"pop", m_pop}, {"swap", m_swap}, {"add", m_add},
		{"nop", m_nop}, {"sub", m_sub}, {"div", m_div},
		{"mul", m_mul}, {"mod", m_mod}, {"pchar", m_pchar},
		{"pstr", m_pstr}, {NULL, NULL}
	};

	for (i = 0; ops[i].opcode; i++)
	{
		if (strcmp(opcode, ops[i].opcode) == 0)
		{
			ops[i].f(stack, line_number);
			return;
		}
	}
	instruction_error(opcode, line_number);
}

#include "monty.h"

/**
 *
 *
 *
 *
 */

void fn_finder(char *opcode, unsigned int line_number)
{
	unsigned int i;
	instruction_t ops[] = {
		{"push", m_push},
		{"pall", m_pall},
		{"pint", m_pint},
		{"pop", m_pop},
		{"swap", m_swap},
		{"add", m_add},
		{"nop", m_nop},
		{NULL, NULL}
	}

	for (i = 0; i < (sizeof(ops) / sizeof(instruction_t *)); i++)
	{
		if (ops[i].f == NULL)
			break;
		if (strcmp(opcode, ops[i].opcode) == 0)
			return (ops[i].f(head, line_number));
	}
}

#ifndef __MONTY_H__
#define __MONTY_H__

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

extern stack_t **stack;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

void fn_finder(char *opcode, unsigned int line_number, stack_t **stack);
void arg_error(void);
void fileopen_error(char *filename);
void instruction_error(char *opcode, unsigned int line_number);
void alloc_error(void);
void sts_error(unsigned int line_number, char *opcode);
void pop_error(unsigned int line_number);
void pint_error(unsigned int line_number);
void push_error(unsigned int line_number);
void div_error(unsigned int line_number);
void m_pall(stack_t **stack, unsigned int line_number);
void m_push(stack_t **stack, unsigned int line_number);
void m_pint(stack_t **stack, unsigned int line_number);
void m_pop(stack_t **stack, unsigned int line_number);
void m_swap(stack_t **stack, unsigned int line_number);
void m_add(stack_t **stack, unsigned int line_number);
void m_nop(stack_t **stack, unsigned int line_number);
void m_sub(stack_t **stack, unsigned int line_number);
void m_div(stack_t **stack, unsigned int line_number);
void m_mul(stack_t **stack, unsigned int line_number);
void m_mod(stack_t **stack, unsigned int line_number);
void m_free_stack(stack_t *stack);

#endif /* __MONTY_H__ */

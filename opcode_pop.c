#include "monty.h"

/**
 * opcode_pop - removes the top element of the stack
 * @stack: pointer stack
 * @line_number: line number of the opcode
 **/
void opcode_pop(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp;

	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		free(glob.line);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
	tmp = (*stack)->next;
	free(*stack);
	*stack = tmp;

	if (*stack != NULL)
		(*stack)->prev = NULL;
}

#include "monty.h"

/**
 * opcode_sub - subtracts the top element from the second top element
 * @stack: double pointer stack
 * @line_number: current line number in the file
 */
void opcode_sub(stack_t **stack, unsigned int line_number)
{
	int res;
	stack_t *tmp;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	tmp = *stack;
	res = tmp->next->n - tmp->n;
	tmp->next->n = res;
	*stack = tmp->next;
	free(tmp);
}

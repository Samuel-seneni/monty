#include "monty.h"

/**
 * opcode_mul - multiplies the second top element with the top element
 * @stack: double pointer to the head of the stack
 * @line_number: current line number in the file
 */
void opcode_mul(stack_t **stack, unsigned int line_number)
{
	int res;
	stack_t *tmp;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	tmp = *stack;
	res = tmp->next->n * tmp->n;
	tmp->next->n = res;
	*stack = tmp->next;
	free(tmp);
}

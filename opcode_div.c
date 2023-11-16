#include "monty.h"

/**
 * opcode_div - divides the second top element of the stack by the top element
 * @stack: double pointer to the stack
 * @line_number: current line number in the file
 */
void opcode_div(stack_t **stack, unsigned int line_number)
{
	int res;
	stack_t *tmp;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	tmp = *stack;
	if (tmp->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}
	res = tmp->next->n / tmp->n;
	tmp->next->n = res;
	*stack = tmp->next;
	free(tmp);
}

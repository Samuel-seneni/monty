#include "monty.h"

/**
 * opcode_pint - prints the value at the top of the stack
 * @stack: double pointer of the stack
 * @line_number: line number of the opcode
*/
void opcode_pint(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: line_number can't pint, stack empty\n", line_number);
		free(glob.line);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}

	printf("%d\n", (*stack)->n);
}

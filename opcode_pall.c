#include "monty.h"

/**
 * opcode_pall - prints all values on the stack
 * @stack: stack pointer
 * @line_number: line number of the opcode
 */
void opcode_pall(stack_t **stack, unsigned int line_number)
{
	stack_t *current = *stack;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		(void)line_number;
	}

}

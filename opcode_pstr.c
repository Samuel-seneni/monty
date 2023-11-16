#include "monty.h"

/**
 * opcode_pstr - prints the string starting at the top of the stack
 * @stack: double pointer of the stack.
 * @line_number: current line number of the opcode
 */
void opcode_pstr(stack_t **stack, unsigned int line_number)
{
	stack_t *cur = *stack;
	(void) line_number;

	while (cur && cur->n > 0 && cur->n <= 127)
	{
		printf("%c", cur->n);
		cur = cur->next;
	}
	printf("\n");
}

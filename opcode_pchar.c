#include "monty.h"

/**
 * opcode_pchar - prints the character at of the stack
 * @stack: pointer to the stack
 * @line_number: current line number of the opcode
 */
void opcode_pchar(stack_t **stack, unsigned int line_number)
{
	int val;

	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}

	val = (*stack)->n;
	if (val < 0 || val > 127)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", line_number);
		exit(EXIT_FAILURE);
	}

	printf("%c\n", val);
}

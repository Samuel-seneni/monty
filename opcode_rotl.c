#include "monty.h"

/**
 * opcode_rotl - rotates the stack to the top
 * @stack: stack head
 * Return: 0
 */
void opcode_rotl(stack_t **stack)
{
	stack_t *tmp = *stack, *unix;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		return;
	}
	unix = (*stack)->next;
	unix->prev = NULL;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = *stack;
	(*stack)->next = NULL;
	(*stack)->prev = tmp;
	(*stack) = unix;
}

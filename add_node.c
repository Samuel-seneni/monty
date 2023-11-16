#include "monty.h"

/**
 * add_node - adds a new node at the beginning of a stack_t list
 * @stack: double pointer of the stack
 * @n: value added to the node
 * Return: pointer
 */
stack_t *add_node(stack_t **stack, const int n)
{
	stack_t *node;

	node = malloc(sizeof(stack_t));
	if (node == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}

	node->n = n;
	node->prev = NULL;

	if (*stack == NULL)
		node->next = NULL;
	else
	{
		node->next = *stack;
		(*stack)->prev = node;
	}
	*stack = node;

	return (node);
}

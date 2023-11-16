#include "monty.h"

/**
 * opcode_push - pushes an element onto the stack
 * @stack: pointer stack
 * @line_number: current line number of the opcode in the Monty file
 */
void opcode_push(stack_t **stack, unsigned int line_number)
{
	int x;

	if (glob.arg == NULL || !is_number(glob.arg))
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		free_stack(*stack);
		fclose(glob.file);
		free(glob.line);
		exit(EXIT_FAILURE);
	}

	x = atoi(glob.arg);
	if (add_node(stack, x) == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		free_stack(*stack);
		fclose(glob.file);
		free(glob.line);
		exit(EXIT_FAILURE);
	}
}

/**
 * is_number - checks if a string is a number
 * @string: string to be checked
 * Return: 1 
 */
int is_number(char *string)
{
	if (string == NULL || *string == '\0')
		return (0);

	if (*string == '-' || *string == '+')
		string++;

	while (*string != '\0')
	{
		if (*string < '0' || *string > '9')
			return (0);

		string++;
	}

	return (1);
}

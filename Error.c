#include "monty.h"

/**
 * _Error - function who print error on stderr
 * @error_num: error number
 * @op_code: operation code
 * @line_number: line number
 * Return: nothing
 */

void _Error(int error_num, char *op_code, unsigned int line_number)
{
	switch (error_num)
	{
	case 100:
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
		break;

	case 101:
		fprintf(stderr, "Error: Can't open file %s\n", op_code);
		exit(EXIT_FAILURE);
		break;

	case 102:
		fprintf(stderr, "L%d: unknown instruction %s\n", line_number, op_code);
		exit(EXIT_FAILURE);
		break;

	case 103:
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
		break;

	case 104:
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
		break;

	case 105:
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
		break;

	case 106:
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
		break;

	case 107:
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
		break;
	}

}

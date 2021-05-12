#include "monty.h"
/**
 * _Error2 - function who print error on stderr
 * @error_num: error number
 * @op_code: operation code
 * @line_number: line number
 */
void _Error2(int error_num, char *op_code, unsigned int line_number)
{
(void)op_code;
	switch (error_num)
	{
	case 200:
		fprintf(stderr, "L%d: can't sub, stack too short\n", line_number);
		exit(EXIT_FAILURE);
		break;
	}
}

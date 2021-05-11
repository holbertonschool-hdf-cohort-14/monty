#include "monty.h"

char *op_value = NULL;

/**
 * main - entry point, monty interpreter
 * @argc: nbr of arg givent to the prog
 * @argv: argument here monty file_name
 * Return: always 0 sucsess, or EXIT_FAILURE if error
 */

int main(int argc, char **argv)
{
    FILE *file = NULL;
    char *line = NULL;
    size_t line_len = 0;
    unsigned int line_number = 1;
    char *op_code = NULL;
    int handler = 0;
    stack_t *stack = NULL;

    if (argc != 2)
    {
        _Error(Error_input, NULL, 0);
    }

    file = fopen(argv[1], "r");
    if (file == NULL)
    {
        _Error(Error_file, argv[1], 0);
    }

    while (getline(&line, &line_len, file) != -1)
    {
        line_number++;
        op_code = strtok(line, DELIMITEUR);
        if (op_code)
        {
            op_value = strtok(NULL, DELIMITEUR);
            handler = get_opcode(op_code, &stack, line_number);
            if (handler == 0)
            {
                _Error(Error_instruction, op_code, line_number);
                free_stack(&stack);
                fclose(file);
            }
        }
    }
    free_stack(&stack);
    free(line);
    fclose(file);
    return (0);
}
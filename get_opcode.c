#include "monty.h"

int *get_opcode(char *op_code, stack_t **stack, unsigned int line_number)
{
    int i = 0;

    instruction_t instruction [] = {
        {"push", _push},
        {"pall", _pall},
        {"pint", _pint},
        {NULL,NULL}
    };

    while ((instruction + i)->opcode)
    {
        if(strcmp(op_code, (instruction + i)->opcode) == 0)
        {
            return ((instruction + i)->f);
        }
        i++;
    }    
    return (0);
}
#include "monty.h"

int get_opcode(char *op_code, stack_t **stack, unsigned int line_number)
{
    int i = 0;

    instruction_t instruction [] = {
        {"pall", _pall},
        {"push", _push},
        {"pint", _pint},
        {"nop", _nop},
        /*{"add", _add},*/
        {NULL,NULL}
    };

    while ((instruction + i)->opcode)
    {
        if(strcmp(op_code, (instruction + i)->opcode) == 0)
        {
            /*instruction[i].f(stack, line_number);*/
            (instruction + i)->f(stack, line_number);
            return (1);
        }
        i++;
    }    
    return (0);
}
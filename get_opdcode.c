#include "monty.h"

int (*get_opcode(char s))(va_list)
{
    int i = 0;

    instruction_t instructions[] = {

        {"push", _push},
        {"pall", _pall}
    };

    while (i < 1)
    {
        if (instructions[i].opcode[0] == s)
            return (instructions[i].f);
    }

    return (NULL);
}
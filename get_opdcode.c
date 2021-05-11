#include "monty.h"

int (*get_opcode(char s))(va_list)
{
    int i = 0;

    instruction_t op[] = {

        {"push", _push},
        {"pall", _pall}
    };

    while (i < 1)
    {
        if (op[i].opcode[0] == s)
            return (op[i].f);
    }

    return (NULL);
}
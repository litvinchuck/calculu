#include <string.h>
#include "stack.h"
#include "parser.h"

double parse(char *expr)
{
    return;
}

double calculate(double a, double b, char opp)
{
    switch (opp)
    {
    case '+':
        return a + b;
        break;

    case '-':
        return a - b;
        break;
    
    case '*':
        return a * b;
        break;
    
    case '/':
        return a / b;
        break;

    default:
        return 0;
        break;
    }
}

int is_num(char c)
{
    /* Numerals in ASCII are between 48 and 57 */
    if (c >= 48 && c <= 57)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int is_opp(char c)
{
    if (c == 43 || c == 45)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

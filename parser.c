#include <stdio.h>
#include <string.h>
#include "stack.h"

double parse(char *expr);

static double calculate(double a, double b, char opp);

static int is_num(char c);

static int is_opp(char c);

int main(int argc, char *argv[])
{
    /* TESTS */
    printf("----------------\n");
    printf("     TESTS      \n");
    printf("----------------\n\n");

    printf("calculate(1, 2, '+'): %i\n", calculate(1, 2, '+') == 3.0);
    printf("calculate(1, 2, '-'): %i\n", calculate(1, 2, '-') == -1.0);
    printf("calculate(1, 2, 'a'): %i\n", calculate(1, 2, 'a') == 0);

    printf("\n");
    
    printf("is_num('1'): %i\n", is_num('1') == 1);
    printf("is_num('5'): %i\n", is_num('5') == 1);
    printf("is_num('a'): %i\n", is_num('a') == 0);

    printf("\n");

    printf("is_opp('+'): %i\n", is_opp('+') == 1);
    printf("is_opp('-'): %i\n", is_opp('-') == 1);
    printf("is_opp('a'): %i\n", is_opp('a') == 0);

    printf("\n----------------\n");
    printf("  END OF TESTS  \n");
    printf("----------------\n\n");


    printf("Command: %s\n", argv[1]);
    printf("%f\n", calculate(1, 2, '+'));
    parse(*argv);
}

double parse(char *expr)
{
    for (int i = 0, l=strlen(expr); i < l; i++)
    {
        
    }
}

static double calculate(double a, double b, char opp)
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

static int is_num(char c)
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

static int is_opp(char c)
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

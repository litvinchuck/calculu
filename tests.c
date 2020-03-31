#include "tests.h"
#include "sll.h"
#include "parser.h"

#include <stdio.h>

int main(int argc, char *argv[])
{
    parser_test();
    sll_test();
    printf("Command: %s\n", argv[1]);
    parse(*argv);
}

void parser_test()
{
    /* TESTS */
    printf("--------------------\n");
    printf("    PARSER TESTS    \n");
    printf("--------------------\n\n");

    printf("calculate(1, 2, '+') is 3.0: %i\n", calculate(1, 2, '+') == 3.0);
    printf("calculate(1, 2, '-') is -1.0: %i\n", calculate(1, 2, '-') == -1.0);
    printf("calculate(1, 2, 'a') is 0: %i\n", calculate(1, 2, 'a') == 0);

    printf("\n");
    
    printf("is_num('1') is true: %i\n", is_num('1') == 1);
    printf("is_num('5') is true: %i\n", is_num('5') == 1);
    printf("is_num('a') is false: %i\n", is_num('a') == 0);

    printf("\n");

    printf("is_opp('+') is true: %i\n", is_opp('+') == 1);
    printf("is_opp('-') is true: %i\n", is_opp('-') == 1);
    printf("is_opp('a') is false: %i\n", is_opp('a') == 0);

    printf("\n--------------------\n");
    printf(" END OF PARSER TESTS \n");
    printf("--------------------\n\n");
}

void sll_test()
{
    printf("----------------\n");
    printf("   SLL TESTS    \n");
    printf("----------------\n\n");

    int val = 1;
    sll_node* sll = sll_create(val);
    printf("Created sll node with value %i in it.\n", val);
    printf("sll_find(sll, %i) is 1: %i\n", val, sll_find(sll, val) == 1);

    printf("\n----------------\n");
    printf(" SLL TESTS END  \n");
    printf("----------------\n\n");
}

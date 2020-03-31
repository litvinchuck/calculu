#ifndef PARSER_H
#define PARSER_H

double parse(char *expr);

double calculate(double a, double b, char opp);

int is_num(char c);

int is_opp(char c);

#endif

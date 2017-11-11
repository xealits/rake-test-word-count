#ifndef LEXER_H_
#define LEXER_H_

#define COUNTER_NAME_LEN 16

char counter_names[3][COUNTER_NAME_LEN] = {"frr_count", "fee_count", "fum_count"};
extern int frr_count, fee_count, fum_count;
extern int yylex( void );

#endif

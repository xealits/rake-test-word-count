#include <lexer.h>
//#include <counter.h> not needed here, it just defines the counter function as external for users

void counter( int counts[3], char* count_names[3] )
{
	while( yylex() ) ;
	counts[0] = frr_count;
	counts[1] = fee_count;
	counts[2] = fum_count;
	count_names[0] = counter_names[0];
	count_names[1] = counter_names[1];
	count_names[2] = counter_names[2];
}


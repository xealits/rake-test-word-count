#include <stdio.h>
//#include <stdlib.h> // for exit(0)

// both work:
#include <counter.h>
//#include "count_words.deps/counter.h"

int main( int argc, char ** argv )
{
// how to claenly pass the literals of the counted words -- which words are counted?
// everything is passed between parts of the program implicitly
// it ends up to be just 1 command, not separate components... unix style
int counts[3];
char* names[3];
counter( counts, names );
printf("%20s %20s %20s\n", names[0], names[1], names[2]);
printf("%20d %20d %20d\n", counts[0], counts[1], counts[2]);
//exit( 0 );

return 0;
}

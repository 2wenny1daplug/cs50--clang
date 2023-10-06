/***Valgrind is a tool that can check to see if there are memory-related issues with your programs wherein you utilized malloc. Specifically, it checks to see if you free all the memory you allocated.

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *x = malloc(3 *sizeof(int));
    x[0] = 72;
    x[1] = 73;
    x[2] = 33;
}

Notice that running this program does not cause any errors. While malloc is used to allocate enough memory for an array,
the code fails to free that allocated memory.
If you type make memory followed by valgrind ./memory, 
you will get a report from valgrind that will report where memory has been lost as a result of your program.


modify code as follows;***/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *x = malloc(3 * sizeof(int));
    x[0] = 72;
    x[1] = 73;
    x[2] = 33;
    free(x);
}


//Notice that running valgrind again now results in no memory leaks.

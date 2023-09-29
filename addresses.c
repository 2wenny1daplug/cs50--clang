/***#include <stdio.h>

int main(void)
{
    int n = 50;
    printf("%i\n", n);
}
***/
// Notice how n is stored in memory with the value 50.

//The C language has two powerful operators that relate to memory:

// & Provides the address of something stored in memory.
//  * Instructs the compiler to go to a location in memory.

#include <stdio.h>

int main(void)
{
    int n = 50;
    int *p = &n;

    printf("%p\n", p);
}

/***Notice the %p, which allows us to view the address of a location in memory. 
&n can be literally translated as “the address of n.” Executing this code will return an address of memory beginning with 0x.***/

//Notice the pointer seems rather large. Indeed, a pointer is usually stored as an 8-byte value.
//You can more accurately visualize a pointer as one address that points to another:


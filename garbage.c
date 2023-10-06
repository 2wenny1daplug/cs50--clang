/***When you ask the compiler for a block of memory, there is no guarantee that this memory will be empty.
It’s very possible that this memory that you allocated was previously utilized by the computer. 
Accordingly, you may see junk or garbage values. This is a result of you getting a block of memory but not initializing it. 
For example, consider the following code:***/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int scores[1024];
    for (int i = 0; i < 1024; i++)
    {
        printf("%i\n", scores[i]);
    }
}


/***Notice that running this code will allocate 1024 locations in memory for your array, but the for loop will likely show that not all values therein are 0
It’s always best practice to be aware of the potential for garbage values when you do not initialize blocks of memory to some other value like zero or otherwise.***/


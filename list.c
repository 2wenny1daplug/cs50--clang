/*** Implements a list of numbers with an array of fixed size

#include <stdio.h>

int main(void)
{
    // List of size 3
    int list[3];

    // Initialize list with numbers
    list[0] = 1;
    list[1] = 2;
    list[2] = 3;

    // Print list
    for (int i = 0; i < 3; i++)
    {
        printf("%i\n", list[i]);
    }
}

 We have memory being preallocated for three items.

 we can leverage our understanding of pointers to create a better design in this code

// Implements a list of numbers with an array of dynamic size using realloc

// Implements a list of numbers with an array of dynamic size

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // List of size 3
    int *list = malloc(3 * sizeof(int));
    if (list == NULL)
    {
        return 1;
    }

    // Initialize list of size 3 with numbers
    list[0] = 1;
    list[1] = 2;
    list[2] = 3;

    // List of size 4
    int *tmp = malloc(4 * sizeof(int));
    if (tmp == NULL)
    {
        free(list);
        return 1;
    }

    // Copy list of size 3 into list of size 4
    for (int i = 0; i < 3; i++)
    {
        tmp[i] = list[i];
    }

    // Add number to list of size 4
    tmp[3] = 4;

    // Free list of size 3
    free(list);

    // Remember list of size 4
    list = tmp;

    // Print list
    for (int i = 0; i < 4; i++)
    {
        printf("%i\n", list[i]);
    }

    // Free list
    free(list);
    return 0;


Notice that a list of size three integers is created. Then, three memory addresses can be assigned the values 1, 2, and 3.
Then, a list of size four is created. Next, the list is copied from the first to the second. The value for the 4 is added to the tmp list. 
Since the block of memory that list points to is no longer used, it is freed using the command free(list). 
Finally, the compiler is told to point list pointer now to the block of memory that tmp points to. The contents of list are printed and then freed.
It’s useful to think about list and tmp as both signs that point at a chunk of memory. 
As in the example above, list at one point pointed to an array of size 3. By the end, list was told to point to a chunk of memory of size 4. 
Technically, by the end of the above code, tmp and list both pointed to the same block of memory.
C comes with a very useful function called realloc that will reallocate the memory for you. 
realloc takes two arguments. First, it asks you to specify the array you are attempting to copy. Second, it asks you to specify the size to which you would like the final array to be. ***/

// Implements a list of numbers with an array of dynamic size using realloc

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // List of size 3
    int *list = malloc(3 * sizeof(int));
    if (list == NULL)
    {
        return 1;
    }

    // Initialize list of size 3 with numbers
    list[0] = 1;
    list[1] = 2;
    list[2] = 3;

    // Resize list to be of size 4
    int *tmp = realloc(list, 4 * sizeof(int));
    if (tmp == NULL)
    {
        free(list);
        return 1;
    }
    list = tmp;

    // Add number to list
    list[3] = 4;

    // Print list
    for (int i = 0; i < 4; i++)
    {
        printf("%i\n", list[i]);
    }

    // Free list
    free(list);
    return 0;
}

/***Notice that int *tmp = realloc(list, 4 * sizeof(int)) creates a list of size four integers. Then, it copies the values of list to this new array. 
Finally, a pointer called tmp points to the location of memory of this new array. The copying is handled by realloc. 
Once that copy is made, the memory at the location of list is freed. Then, the pointer called list is pointed at the location of tmp, where the new array is located.
You can imagine how using realloc for a queue or stack could be useful. As the amount of data grows, realloc could be used to grow or shrink the stack or queue.
***/

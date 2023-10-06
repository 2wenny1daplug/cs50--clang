//a common need in programming is copying one string to another
/***
#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // Get a string
    string s = get_string("s: ");

    //copy string's address
    string t= s;

    //capitalize first letter in string
    t[0] = toupper(t[0]);

    //print string twice
    printf("s: %s\n", s);
    printf("t: %s\n", t);
}
***/
// Notice that string t = s copies the address of s to t. This does not accomplish what we are desiring. The string is not copied – only the address is.

/***
Before we address this challenge, it’s important to ensure that we don’t experience a segmentation fault through our code, 
where we attempt to copy string s to string t, where string t does not exist. 
We can employ the strlen function as follows to assist with that:
 ***/

/***
#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // Get a string
    string s = get_string("s: ");

    // Copy string's address
    string t = s;

    // Capitalize first letter in string
    if (strlen(t) > 0)
    {
        t[0] = toupper(t[0]);
    }

    // Print string twice
    printf("s: %s\n", s);
    printf("t: %s\n", t);
}
***/


// Notice that strlen is used to make sure string t exists. If it does not, nothing will be copied.

/***
To be able to make an authentic copy of the string, we will need to introduce two new building blocks. 
First, malloc allows you, the programmer, to allocate a block of a specific size of memory. 
Second, free allows you to tell the compiler to free up that block of memory you previously allocated.
 ***/

// modify our code to create an authentic copy of our string as follows:


/***
#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    // Get a string
    char *s = get_string("s: ");

    // Allocate memory for another string
    char *t = malloc(strlen(s) + 1);

    // Copy string into memory, including '\0'
    for (int i = 0; i <= strlen(s); i++)
    {
        t[i] = s[i];
    }

    // Capitalize copy
    t[0] = toupper(t[0]);

    // Print strings
    printf("s: %s\n", s);
    printf("t: %s\n", t);
}
***/

/***Notice that malloc(strlen(s) + 1) creates a block of memory that is the length of the string s plus one. 
This allows for the inclusion of the null \0 character in our final, copied string
Then, the for loop walks through the string s and assigns each value to that same location on the string t.
***/

//turns out that there is an inefficiency in our code. Modify  code as follows:

/***
#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    // Get a string
    char *s = get_string("s: ");

    // Allocate memory for another string
    char *t = malloc(strlen(s) + 1);

    // Copy string into memory, including '\0'
    for (int i = 0, n = strlen(s); i <= n; i++)
    {
        t[i] = s[i];
    }

    // Capitalize copy
    t[0] = toupper(t[0]);

    // Print strings
    printf("s: %s\n", s);
    printf("t: %s\n", t);
}

Notice that n = strlen(s) is defined now in the left-hand side of the for loop. It’s best not to call unneeded functions in the middle condition of the for loop, as it will run over and over again. When moving n = strlen(s) to the left-hand side, the function strlen only runs once.

The C Language has a built-in function to copy strings called strcpy. It can be implemented as follows:

#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    // Get a string
    char *s = get_string("s: ");

    // Allocate memory for another string
    char *t = malloc(strlen(s) + 1);

    // Copy string into memory
    strcpy(t, s);

    // Capitalize copy
    t[0] = toupper(t[0]);

    // Print strings
    printf("s: %s\n", s);
    printf("t: %s\n", t);
}
Notice that strcpy does the same work that our for loop previously did.

Both get_string and malloc return NULL, a special value in memory, in the event that something goes wrong. 
You can write code that can check for this NULL condition as follows:***/

#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    // Get a string
    char *s = get_string("s: ");
    if (s == NULL)
    {
        return 1;
    }

    // Allocate memory for another string
    char *t = malloc(strlen(s) + 1);
    if (t == NULL)
    {
        return 1;
    }

    // Copy string into memory
    strcpy(t, s);

    // Capitalize copy
    if (strlen(t) > 0)
    {
        t[0] = toupper(t[0]);
    }

    // Print strings
    printf("s: %s\n", s);
    printf("t: %s\n", t);

    // Free memory
    free(t);
    return 0;
}
// Notice that if the string obtained is of length 0 or malloc fails, NULL is returned. Further, notice that free lets the computer know you are done with this block of memory you created via malloc.










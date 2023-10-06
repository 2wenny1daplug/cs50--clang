/***In CS50, we have created functions like get_int to simplify the act of getting input from the user.
scanf is a built-in function that can get user input.
We can reimplement get_int rather easily using scanf as follows:

#include <stdio.h>

int main(void)
{
    int x;
    printf("x: ");
    scanf("%i", &x);
    printf("x: %i\n", x);/***
}

Notice that the value of x is stored at the location of x in the line scanf("%i", &x).


Attempting to reimplement get_string is not easy. Consider the following:
Notice that the value of x is stored at the location of x in the line scanf("%i", &x).

However, attempting to reimplement get_string is not easy. Consider the following:

#include <stdio.h>

int main(void)
{
    char *s;
    printf("s: ");
    scanf("%s", s);
    printf("s: %s\n", s);
}
Notice that no & is required because strings are special. Still, this program will not function. Nowhere in this program do we allocate the amount of memory required for our string.
***/

// We can modify our code as follows:

#include <stdio.h>

int main(void)
{
    char s[4];
    printf("s: ");
    scanf("%s", s);
    printf("s: %s\n", s);
}

// Notice that if we pre-allocate an array of size 4, we can type cat and the program functions. However, a string larger than this would create an error.





//A string of characters is simply an array of characters identified by its first byte.
/***we could not compare two strings using the == operator. Utilizing the == operator in an attempt to compare strings will attempt to compare the memory locations of the strings instead of the characters therein. Accordingly, we recommended the use of strcmp.
To illustrate this, type code compare.c and write code as follows:***/
/***#include <cs50.h>
#include <stdio.h>

int main (void)
{
    int i = get_int ("i: ");
    int j = get_int ("j: ");

    if (i == j)
    {
        printf ("same\n");
    }
    else
    {
        printf ("different\n");
    }
}***/

//Noticing that typing in HI! for both strings still results in the output of Different.


/***
#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //get string 
    char *s = get_string ("s: ");
    char *t = get_string ("t: ");

    //print strings 
    printf("%s\n", s);
    printf("%s\n",  t);

}***/

// nOTE: we now have two separate strings stored likely at two separate locations.

//to see the location of these two strings you can modify the code as follows.

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Get two strings
    char *s = get_string("s: ");
    char *t = get_string("t: ");

    // Print strings' addresses
    printf("%p\n", s);
    printf("%p\n", t);
}

//Notice that the %s has been changed to %p in the print statement.
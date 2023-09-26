/*A common problem within programming, and perhaps C more specifically, is to discover the length of an array.
How could we implement this in code? */


#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompt for user's name
    string name = get_string("Name: ");

    // Count number of characters up until '\0' (aka NUL)
    int n = 0;
    while (name[n] != '\0')
    {
        n++;
    }
    printf("%i\n", n);
}
// Notice that this code loops until the NUL character is found.


/***
Since this is such a common problem within programming, other programmers have created code in the string.h library to find the length of a string.
You can find the length of a string by modifying your code as follows:***/

#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // Prompt for user's name
    string name = get_string("Name: ");
    int length = strlen(name);
    printf("%i\n", length);
}

// Notice that this code uses the string.h library, declared at the top of the file. Further, it uses a function from that library called strlen, which calculates the length of the string passed to it.
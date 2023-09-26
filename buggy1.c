/***#include <cs50.h>
#include <stdio.h>

int get_negative_int(void);

int main(void)
{
    int i = get_negative_int();
    printf("%i\n", i);
}

// Prompt user for positive integer
int get_negative_int(void)
{
    int n;
    do
    {
        n = get_int("Negative Integer: ");
    }
    while (n < 0);
    return n;
}
***/

    /***Notice get_negative_int is designed to get a negative integer from the user.

Running make buggy1, you’ll notice that it does not do as intended. It accepts positive integers and seems to ignore negative ones.
As before, set a breakpoint at a line of your code. Best to set a breakpoint at int i = get_negative_int. Now, run debug50 buggy1.
Unlike before, where you utilized the step over button at the top of the window, use the step into button. This will take the debugger into your get_negative_int function. Notice how doing this will show you that you are, indeed, stuck in the do while loop.
With this knowledge, you might consider why you are stuck in this loop, leading you to edit your code as follows:***/

#include <cs50.h>
#include <stdio.h>

int get_negative_int(void);

int main(void)
{
    int i = get_negative_int();
    printf("%i\n", i);
}

// Prompt user for positive integer
int get_negative_int(void)
{
    int n;
    do
    {
        n = get_int("Negative Integer: ");
    }
    while (n >= 0);
    return n;

}
//Notice n < 0 has been changed.


// To illustrate the use of the * operator, consider the following:

#include <stdio.h>

int main(void)
{
    int n = 50;
    int *p = &n;

    printf("%i\n", *p);
}

// Notice that the printf line prints the integer at the location of p.
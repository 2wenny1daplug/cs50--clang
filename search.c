#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // An array of integers
    int numbers[] = {20, 500, 10, 5, 100, 1, 50};

    // Search for number
    int n = get_int("Number: ");
    for (int i = 0; i < 7; i++)
    {
        if (numbers[i] == n)
        {
            printf("Found\n");
            return 0; 
        }
    }
    printf("Not found\n");
    return 1;
} 

// the line beginning with int numbers[] allows us to define the values of each element of the array as we create it.
//Then, in the for loop, we have an implementation of linear search.

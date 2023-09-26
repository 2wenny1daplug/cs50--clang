#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Missing command-line argument\n");
        return 1;
    }
    printf("hello, %s\n", argv[1]);
    return 0;
}

//Notice that if you fail to provide ./status David, you will get an exit status of 1. However, if you do provide ./status David, you will get an exit status of 0.

//You can imagine how you might use portions of the above program to check if a user provided the correct number of command-line arguments.

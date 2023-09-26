/***Command-line arguments are those arguments that are passed to your program at the command line. For example, all those statements you typed after clang are considered command line arguments.
 You can use these arguments in your own programs!
 #include <cs50.h>
#include <stdio.h>

int main(void)
{
    string name = get_string("What's your name? ");
    printf("hello, %s\n", name);
}
 notice that this says hello to the user.
 still it would be nice to be able to make arguments b4 the program even runs, u should modify as follows***/

#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[])
{
    if (argc == 2)
    {
        printf("hello, %s\n", argv[1]);
    }
    else
    {
        printf("hello, world\n");
    }
}

/***Notice that this program knows both argc, the number of command line arguments, and argv which is an array of the characters passed as arguments at the command line.
Therefore, using the syntax of this program, executing ./greet David would result in the program saying hello, David.***/







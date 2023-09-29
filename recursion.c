/***#include <cs50.h>
#include <stdio.h>

void draw(int n);

int main(void)
{
    draw(1);
}

void draw(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("#");
    }
    printf("\n");

    draw(n + 1);
}
Notice that the draw function calls itself. Further, note that your code may get caught in an infinite loop. To break from this loop, if you get stuck, hit ctrl-c on your keyboard. The reason this creates an infinite loop is that there is nothing telling the program to end. There is no case where the program is done.

We can correct our code as follows:
***/


#include <cs50.h>
#include <stdio.h>

void draw(int n);

int main(void)
{
    // Get height of pyramid
    int height = get_int("Height: ");

    // Draw pyramid
    draw(height);
}

void draw(int n)
{
    // If nothing to draw
    if (n <= 0)
    {
        return;
    }

    // Draw pyramid of height n - 1
    draw(n - 1);

    // Draw one more row of width n
    for (int i = 0; i < n; i++)
    {
        printf("#");
    }
    printf("\n");

    {
        printf("#");
    }
        printf("\n");
}

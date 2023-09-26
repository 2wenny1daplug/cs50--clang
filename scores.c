#include <stdio.h>

int main(void)
{
    int score1 = 72;
    int score2 = 73;
    int score3 = 33;

    printf("Average: %f\n" , (score1 + score2 + score3 / 3.0));

    // to present a floating number when working with int atleast make one number on the right a floating number
    //also you can use (float)3 instead
}
/***Naturally, it’s hard to swap two variables without a temporary holding space. 
in practise, write code as follows

#include <stdio.h>

void swap(int a, int b);

int main(void)
{
    int x = 1;
    int y = 2;

    printf("x is %i, y is %i\n", x, y);
    swap(x, y);
    printf("x is %i, y is %i\n", x, y);
}

void swap(int a, int b)
{
    int tmp = a;
    a = b;
    b = tmp;
}

Notice that while this code runs, it does not work. The values, even after being sent to the swap function, do not swap. Why?
When you pass values to a function, you are only providing copies. 
The concept of scope. The values of x and y created in the curly {} braces of the main function only have the scope of the main function.
***/

#include <stdio.h>

void swap(int *a, int *b);

int main(void)
{
    int x = 1;
    int y = 2;

    printf("x is %i, y is %i\n", x, y);
    swap(&x, &y);
    printf("x is %i, y is %i\n", x, y);
}

void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}


// Notice that variables are not passed by value but by reference. That is, the addresses of a and b are provided to the function. 
//Therefore, the swap function can know where to make changes to the actual a and b from the main function
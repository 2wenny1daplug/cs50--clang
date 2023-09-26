/***#include <stdio.h>

int main(void)
{
    for (int i = 0; i <= 3; i++)
    {
        printf("#\n");
    }
}
Running this code, four bricks appear instead of the intended three.
printf is a very useful way of debugging your code. You could modify your code as follows:


***/
//Running this code, you will see numerous statements, including i is 0, i is 1, i is 2, and i is 3. Seeing this, you might realize that Further code needs to be corrected as follows:

/***#include <stdio.h>

int main(void)
{
    for (int i = 0; i <= 3; i++)
    {
        printf("i is %i\n", i);
        printf("#\n");
    }
} ***/

//Running this code, you will see numerous statements, including i is 0, i is 1, i is 2, and i is 3. Seeing this, you might realize that Further code needs to be corrected as follows:




#include <stdio.h>

int main(void){

    for (int i = 0; i < 3; i++)
    {
        printf("#\n");
    }
}
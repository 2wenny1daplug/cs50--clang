/***#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string s = get_string("Before: ");
    printf("After:  ");
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            printf("%c", s[i] - 32);
        }
        else
        {
            printf("%c", s[i]);
        }
    }
    printf("\n");
}***/

//this code iterates through each value in the string. The program looks at each character. If the character is lowercase, it subtracts the value 32 from it to convert it to uppercase.

/***When a lowercase character has 32 subtracted from it, it results in an uppercase version of that same character.
While the program does what we want, there is an easier way using the ctype.h library. Modify your program as follows:
***/

/***
#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string s = get_string("Before: ");
    printf("After:  ");
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        if (islower(s[i]))
        {
            printf("%c", toupper(s[i]));
        }
        else
        {
            printf("%c", s[i]);
        }
    }
    printf("\n");
}***/

/***Notice that the program uses islower to detect if each character is uppercase or lowercase. Then, the toupper function is passed s[i]. Each character (if lowercase) is converted to uppercase.
Again, while this program does what is desired, there is an opportunity for improvement. As the documentation for ctype.h states,
toupper is smart enough to know that if it is passed what is already an uppercase letter, it will simply ignore it. Therefore, we no longer need our if statement. You can simplify this code as follows:***/


#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string s = get_string("Before: ");
    printf("After:  ");
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        printf("%c", toupper(s[i]));
    }
    printf("\n");
}
// Notice that this code is quite simplified, removing the unnecessary if statement.



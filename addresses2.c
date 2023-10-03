// Notice how a pointer called s tells the compiler where the first byte of the string exists in memory.
/***#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string s = "HI!";
    printf("%p\n", s);
    printf("%p\n", &s[0]);
    printf("%p\n", &s[1]);
    printf("%p\n", &s[2]);
    printf("%p\n", &s[3]);
}***/

// Notice the above prints the memory locations of each character in the string s.

// Likewise, you can modify your code as follows:

/***#include <stdio.h>

int main(void)
{
    char *s = "HI!";
    printf("%s\n", s);   // output HI!
} ***/
 // Notice that this code will present the string that starts at the location of s.


// Further, you can modify your code as follows:

/***#include <stdio.h>

int main(void)
{
    char *s = "HI!";
    printf("%c\n", s[0]);
    printf("%c\n", s[1]);
    printf("%c\n", s[2]);
}***/
// output H
//        I
//        !

//Notice we are printing each character at the location of s

// further we can modify the code as follows

#include <stdio.h>

int main(void)
{
    char *s = "HI!";
    printf("%c\n", *s);
    printf("%c\n", *(s + 1));
    printf("%c\n", *(s + 2));
}

// Notice that the first character at the location of s is printed. Then, the character at the location s + 1 is printed, and so on.

/*Can you imagine what would happen if you attempted to access something at location s + 50? 
Hackers sometimes attempt to gain access to items in memory they should not have access to. If you attempt this, 
the program will likely quit as a safety precaution.
*/
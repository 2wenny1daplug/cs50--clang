//It turns out that C allows a way by which we can create our own data types via a struct.


#include <cs50.h>
#include <stdio.h>
#include <string.h>

typedef struct
{
    string name;
    string number;
}
person;

int main(void)
{
    person people[2];

    people[0].name = "Carter";
    people[0].number = "+1-617-495-1000";

    people[1].name = "David";
    people[1].number = "+1-949-468-2750";

    // Search for name
    string name = get_string("Name: ");
    for (int i = 0; i < 2; i++)
    {
        if (strcmp(people[i].name, name) == 0)
        {
            printf("Found %s\n", people[i].number);
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}
/**Notice that the code begins with typedef struct where a new datatype called person is defined. 
Inside a person is a string called name and a string called number. 
In the main function, begin by creating an array called people that is of type person that is a size of 2. 
Then, we update the names and phone numbers of the two people in our people array. Most important, notice how the dot notation such as people[0].
name allows us to access the person at the 0th location and assign that individual a name.***/

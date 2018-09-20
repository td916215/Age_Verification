#include <stdio.h>
#include <stdlib.h>

int main()
{
    int minAge = 18;
    int maxAge = 35;

    int age;

    //age = 17;

    printf("Enter your age to continue: ");
    scanf("%d", &age);

    if (age >= minAge && age <= maxAge)
    {
        printf("Age verified!");
    }
    else
    {
        printf("Age not verified!");
    }

    /*
    if (age >= minAge)
    {
        printf("You are old enough to vote!\n");
    }
    else
    {
        printf("You are NOT old enough to vote!\n");
    }
    */

    return 0;
}

#include <stdio.h>

int main()
{
    int age;
    printf("Enter Your Age \n");
    scanf("%d", &age);

    if (age >= 43)
    {
        printf("You are Old You Cannot Drive");
    }
    else if (age > 18)
    {
        printf("You Can Drive");
    }
    else
    {
        printf("You Cannot Drive");
    }

    return 0;
}

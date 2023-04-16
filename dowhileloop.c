#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i = 1;
    // printf("Enter The Value\n");
    // scanf("%d\n", &i);
    do
    {
        printf("The Value Of i is %d\n",  i);
        i++; 
    } while (i <= 10);
    return 0;
}
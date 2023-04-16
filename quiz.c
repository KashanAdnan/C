#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("Enter The Val;ue Of Ten\n");
    int i ;
    scanf("%d" , &i);
    while (i <= 20)
    {
        printf("The Value of i is %d\n", i);
        i++;
    }

    return 0;
}

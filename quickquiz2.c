#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a = 1;
    int n;
    printf("Input Value : \n");
    printf("Enter The Value : \n");
    scanf("%d", &n);

    printf("Output :\n");
    do
    {
        printf("The Value of A is %d\n", a);
        a++;
    } while (a <= n);
    return 0;
};

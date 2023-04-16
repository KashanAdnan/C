#include <stdio.h>

int main()
{
    printf("Enter The First Number \n");
    int a;
    scanf("%d", &a);

    printf("Enter The Second Number \n");
    int b;
    scanf("%d", &b);

    printf("Enter The Third Number \n");
    int c;
    scanf("%d", &c);

    printf("Enter The Fourth Number \n");
    int d;
    scanf("%d", &d);

    if (a > b && a > c && a > d)
    {
        printf("The First Number Is the Biggest ");
        printf("%d", a);
    }
    if (b > a && b > c && b > d)
    {
        printf("The Second Number Is the Biggest ");
        printf("%d", b);
    }
    if (c > a && c > b && c > d)
    {
        printf("The Third Number Is the Biggest ");
        printf("%d", c);
    }
    if (d > a && d > b && d > c)
    {
        printf("The Fourth Number Is the Biggest ");
        printf("%d", d);
    }


    return 0;
}

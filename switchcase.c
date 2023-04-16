#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    switch (a)
    {
    case 2:
        printf("Hello World");
        break;
    case 3:
        printf("Hello World");
        break;

    default:
        printf("Noring Matched");
        break;
    }
    return 0;
}

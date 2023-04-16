#include <stdio.h>

int main()
{
    int i;
    int n;
    printf("Enter Some Value To Print Back\n");
    scanf("%d" , &n);
    for(i = n ; i ; i--){
         printf("%d\n" , i);
    }
    return 0;
}

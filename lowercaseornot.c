#include <stdio.h>

int main(int argc, char const *argv[])
{
    char ch;
    printf("Enter The Character\n");
    scanf("%c", &ch);

    if (ch <= 122 && ch >= 97)
    {
        printf("It's Loercsase !");
    }else{
        printf("It's not Loercsase !");
    }
    
    return 0;
}

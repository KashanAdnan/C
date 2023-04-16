#include <stdio.h>

void display();

int main(int argc, char const *argv[])
{
    int a;
    printf("Initailizing The Dispaly Function\n");
    display();
    printf("Dispaly Function Finished\n");

    return 0;
}

void display()
{
    printf("This is display\n");
}
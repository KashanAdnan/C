#include <stdio.h> 
int main(int argc, char const *argv[])
{
    int i  = 5;
    // we have ++i  -- i  i-- i++
    printf("The Value of i after i++ is %d\n" , i++);
    printf("The Value of i of i++ is %d\n" , i);
    return 0;
}

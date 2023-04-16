#include <stdio.h>

int main(int argc, char const *argv[])
{
    int physics, chemistery, maths;
    printf("Enter The Physics Marks \n");
    scanf("%d", &physics);
    printf("Enter The Chemistry Marks \n");
    scanf("%d", &chemistery);
    printf("Enter The Maths Marks \n");
    scanf("%d", &maths);
    float total;
    total = (physics + maths + chemistery)/3;
    if ((total < 40 || physics < 33 || maths < 33 || chemistery < 33))
    {
        printf("You Total Percentage is %f and you Are Failed " , total);
    }else{
        printf("You Total Percentage is %f and you Are Passed " , total);
    }

    return 0;
}
